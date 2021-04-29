// cointypehandlers.hpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Header for CoinBaseHandler subclasses


#ifndef COINTYPEHANDLERS_HPP
#define COINTYPEHANDLERS_HPP

#include "coinbasehandler.hpp"


class PennyHandler : public CoinBaseHandler
{

public:

private:

    void handleRequest(std::shared_ptr<Coin> coin) const override;

};


class NickelHandler : public CoinBaseHandler
{

public:

private:

    void handleRequest(std::shared_ptr<Coin> coin) const override;

};


class DimeHandler : public CoinBaseHandler
{

public:

private:

    void handleRequest(std::shared_ptr<Coin> coin) const override;

};


class QuarterHandler : public CoinBaseHandler
{

public:

private:

    void handleRequest(std::shared_ptr<Coin> coin) const override;

};


#endif  // COINTYPEHANDLERS_HPP
