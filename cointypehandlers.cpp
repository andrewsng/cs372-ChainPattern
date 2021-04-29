// cointypehandlers.cpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Source for CoinBaseHandler subclasses


#include "cointypehandlers.hpp"
#include <iostream>


void PennyHandler::handleRequest(std::shared_ptr<Coin> coin) const
{
    auto value = coin->getValue();
    if (value == 1)
    {
        std::cout << "We handled a penny!\n";
    }
    else
    {
        CoinBaseHandler::handleRequest(std::move(coin));
    }
}


void NickelHandler::handleRequest(std::shared_ptr<Coin> coin) const
{
    auto value = coin->getValue();
    if (value == 5)
    {
        std::cout << "We handled a nickel!\n";
    }
    else
    {
        CoinBaseHandler::handleRequest(std::move(coin));
    }
}


void DimeHandler::handleRequest(std::shared_ptr<Coin> coin) const
{
    auto value = coin->getValue();
    if (value == 10)
    {
        std::cout << "We handled a dime!\n";
    }
    else
    {
        CoinBaseHandler::handleRequest(std::move(coin));
    }
}


void QuarterHandler::handleRequest(std::shared_ptr<Coin> coin) const
{
    auto value = coin->getValue();
    if (value == 25)
    {
        std::cout << "We handled a quarter!\n";
    }
    else
    {
        CoinBaseHandler::handleRequest(std::move(coin));
    }
}
