#include "coinbasehandler.hpp"


void CoinBaseHandler::setNextHandler(std::shared_ptr<CoinHandler> handler)
{
    _next = std::move(handler);
}


void CoinBaseHandler::handleRequest(const Coin &coin) const
{
    if (_next)
    {
        _next->handle(coin);
    }
}
