//
// Created by Jukka Selesniemi on 26.8.2017.
//

#ifndef MULTITHREADING_CANBUSDATAPROVIDER_HPP
#define MULTITHREADING_CANBUSDATAPROVIDER_HPP

#include "DataProvider.hpp"

namespace app {
namespace data {

class CanBusDataProvider : public DataProvider
{
public:
    CanBusDataProvider()
      : DataProvider("CANBus data")
    {
    }
};

}
}

#endif //MULTITHREADING_CANBUSDATAPROVIDER_HPP
