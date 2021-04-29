// coinhandler.hpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Header for CoinHandler
// abstract class


#ifndef COINHANDLER_HPP
#define COINHANDLER_HPP

#include "coin.hpp"
#include <memory>


class CoinHandler
{

public:

    virtual ~CoinHandler() = default;

    void setNext(std::shared_ptr<CoinHandler> handler);
    void handle(std::shared_ptr<Coin> coin) const;

private:

    virtual void setNextHandler(std::shared_ptr<CoinHandler> handler) = 0;
    virtual void handleRequest(std::shared_ptr<Coin> coin) const = 0;

};


std::shared_ptr<CoinHandler> makePennyHandler();
std::shared_ptr<CoinHandler> makeNickelHandler();
std::shared_ptr<CoinHandler> makeDimeHandler();
std::shared_ptr<CoinHandler> makeQuarterHandler();


#endif  // COINHANDLER_HPP
