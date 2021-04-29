// cointypes.cpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Source for Coin concrete subclasses


#include "cointypes.hpp"


int Penny::getCoinValue() const
{
    return 1;
}

int Nickel::getCoinValue() const
{
    return 5;
}

int Dime::getCoinValue() const
{
    return 10;
}

int Quarter::getCoinValue() const
{
    return 25;
}
