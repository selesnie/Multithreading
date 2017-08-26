//
// Created by Jukka Selesniemi on 26.8.2017.
//

#include "AnimalDataProvider.hpp"

namespace app {
namespace data {

AnimalDataProvider::AnimalDataProvider(const std::string& breed)
  : DataProvider("Animal data"),
    m_breed(breed)
{
}

const std::string& AnimalDataProvider::getData() const
{
    return m_breed;
}

}
}
