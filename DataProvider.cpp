//
// Created by Jukka Selesniemi on 26.8.2017.
//

#include "DataProvider.hpp"

namespace app {
namespace data {

DataProvider::DataProvider(const std::string& data)
  : m_data(data)
{
}

const std::string& DataProvider::getData() const
{
    return m_data;
}

}
}
