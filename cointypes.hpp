#ifndef COINTYPES_HPP
#define COINTYPES_HPP

#include "coin.hpp"


class Penny : public Coin
{

public:

private:

    int getCoinValue() const override;

};


class Nickel : public Coin
{

public:

private:

    int getCoinValue() const override;

};


class Dime : public Coin
{

public:

private:

    int getCoinValue() const override;

};


class Quarter : public Coin
{

public:

private:

    int getCoinValue() const override;

};


#endif  // COINTYPES_HPP

