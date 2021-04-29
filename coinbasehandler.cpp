// coinbasehandler.cpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Source for CoinBaseHandler
// base class


#include "coinbasehandler.hpp"


void CoinBaseHandler::setNextHandler(std::shared_ptr<CoinHandler> handler)
{
    _next = std::move(handler);
}


void CoinBaseHandler::handleRequest(std::shared_ptr<Coin> coin) const
{
    if (_next)
    {
        _next->handle(std::move(coin));
    }
}
