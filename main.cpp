#include "IDataProvider.hpp"
#include "DataProvider.hpp"
#include "CanBusDataProvider.hpp"
#include "AnimalDataProvider.hpp"

#include <chrono>
#include <iostream>
#include <memory>
#include <mutex>
#include <thread>
#include <vector>

namespace
{

void read(std::unique_ptr<app::data::IDataProvider> dataProvider)
{
    for (;;)
    {
        static std::mutex m;

        {
            std::lock_guard<std::mutex> lock(m);

            std::cout << dataProvider->getData() << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

}

int main()
{
    std::cout << "Hardware threads: " << std::thread::hardware_concurrency() << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::vector<std::shared_ptr<std::thread>> threads = {
      {std::make_unique<std::thread>(read, std::make_unique<app::data::CanBusDataProvider>())},
      {std::make_unique<std::thread>(read, std::make_unique<app::data::AnimalDataProvider>("American Eskimo Dog"))},
      {std::make_unique<std::thread>(read, std::make_unique<app::data::DataProvider>("Random data"))},
      {std::make_unique<std::thread>(read, std::make_unique<app::data::AnimalDataProvider>("Duck"))}
    };

    for (const auto& t : threads)
    {
        t->join();
    }

    return 0;
}
