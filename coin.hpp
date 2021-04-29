// coin.hpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Header for Coin abstract class


#ifndef COIN_HPP
#define COIN_HPP

#include <memory>


class Coin
{

public:

    virtual ~Coin() = default;

    int getValue() const;

private:

    virtual int getCoinValue() const = 0;

};


std::shared_ptr<Coin> makePenny();
std::shared_ptr<Coin> makeNickel();
std::shared_ptr<Coin> makeDime();
std::shared_ptr<Coin> makeQuarter();


#endif  // COIN_HPP
