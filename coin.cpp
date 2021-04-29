// coin.cpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Source for Coin abstract class


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
