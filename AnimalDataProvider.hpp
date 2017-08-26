//
// Created by Jukka Selesniemi on 26.8.2017.
//

#ifndef MULTITHREADING_ANIMALDATAPROVIDER_HPP
#define MULTITHREADING_ANIMALDATAPROVIDER_HPP

#include "DataProvider.hpp"

#include <string>

namespace app {
namespace data {

class AnimalDataProvider : public DataProvider
{
public:
    AnimalDataProvider(const std::string& breed);

    const std::string& getData() const override;

private:
    std::string m_breed;
};

}
}

#endif //MULTITHREADING_ANIMALDATAPROVIDER_HPP
