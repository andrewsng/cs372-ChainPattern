#include "coinhandler.hpp"


void CoinHandler::setNext(std::shared_ptr<CoinHandler> handler)
{
    setNextHandler(handler);
}

void CoinHandler::handle(std::shared_ptr<Coin> coin) const
{
    handleRequest(coin);
}

