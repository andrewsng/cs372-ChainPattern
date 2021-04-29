#include "coinhandler.hpp"
#include "cointypehandlers.hpp"


void CoinHandler::setNext(std::shared_ptr<CoinHandler> handler)
{
    setNextHandler(handler);
}

void CoinHandler::handle(std::shared_ptr<Coin> coin) const
{
    handleRequest(coin);
}

std::shared_ptr<CoinHandler> makePennyHandler()
{
    return std::make_shared<PennyHandler>();
}

std::shared_ptr<CoinHandler> makeNickelHandler()
{
    return std::make_shared<NickelHandler>();
}

std::shared_ptr<CoinHandler> makeDimeHandler()
{
    return std::make_shared<DimeHandler>();
}

std::shared_ptr<CoinHandler> makeQuarterHandler()
{
    return std::make_shared<QuarterHandler>();
}
