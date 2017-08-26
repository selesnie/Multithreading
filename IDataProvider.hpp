//
// Created by Jukka Selesniemi on 26.8.2017.
//

#ifndef MULTITHREADING_IDATAPROVIDER_HPP
#define MULTITHREADING_IDATAPROVIDER_HPP

#include <string>

namespace app {
namespace data {

class IDataProvider
{
public:
    IDataProvider() = default;

    virtual ~IDataProvider() = default;

    IDataProvider(const IDataProvider&) = delete;

    IDataProvider& operator=(const IDataProvider&) = delete;

    IDataProvider(IDataProvider&&) = delete;

    IDataProvider& operator=(IDataProvider&&) = delete;

    virtual const std::string& getData() const = 0;
};

}
}

#endif //MULTITHREADING_IDATAPROVIDER_HPP
