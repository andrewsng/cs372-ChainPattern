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
