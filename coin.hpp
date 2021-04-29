#ifndef COIN_HPP
#define COIN_HPP


class Coin
{

public:

    int getValue() const;

private:

    virtual int getCoinValue() const = 0;

};


#endif  // COIN_HPP
