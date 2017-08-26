//
// Created by Jukka Selesniemi on 26.8.2017.
//

#ifndef MULTITHREADING_DATAPROVIDER_HPP
#define MULTITHREADING_DATAPROVIDER_HPP

#include "IDataProvider.hpp"

namespace app {
namespace data {

class DataProvider : public IDataProvider
{
public:
    DataProvider(const std::string& data);

    const std::string& getData() const override;

private:
    std::string m_data;
};

}
}

#endif //MULTITHREADING_DATAPROVIDER_HPP
