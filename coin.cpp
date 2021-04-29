#include "coin.hpp"
#include "cointypes.hpp"


int Coin::getValue() const
{
    return getCoinValue();
}

std::shared_ptr<Coin> makePenny()
{
    return std::make_shared<Penny>();
}

std::shared_ptr<Coin> makeNickel()
{
    return std::make_shared<Nickel>();
}

std::shared_ptr<Coin> makeDime()
{
    return std::make_shared<Dime>();
}

std::shared_ptr<Coin> makeQuarter()
{
    return std::make_shared<Quarter>();
}

