#include "coinhandler.hpp"


void CoinHandler::setNext(std::shared_ptr<CoinHandler> handler)
{
    setNextHandler(handler);
}

void CoinHandler::handle(const Coin &coin) const
{
    handleRequest(coin);
}

