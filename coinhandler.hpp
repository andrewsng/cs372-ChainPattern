#ifndef COINHANDLER_HPP
#define COINHANDLER_HPP

#include "coin.hpp"
#include <memory>


class CoinHandler
{

public:

    void setNext(std::shared_ptr<CoinHandler> handler);
    void handle(const Coin &coin) const;

private:

    virtual void setNextHandler(std::shared_ptr<CoinHandler> handler) = 0;
    virtual void handleRequest(const Coin &coin) const = 0;

};


#endif  // COINHANDLER_HPP

