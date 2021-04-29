// coinbasehandler.hpp
// Andrew S. Ng
// 2021-04-29
//
// For CS 372 Spring 2021
// Header for CoinBaseHandler
// base class


#ifndef COINBASEHANDLER_HPP
#define COINBASEHANDLER_HPP

#include "coinhandler.hpp"
#include <memory>


class CoinBaseHandler : public CoinHandler
{

public:
    
    virtual ~CoinBaseHandler() = default;
    
protected:

    virtual void handleRequest(std::shared_ptr<Coin> coin) const override;

private:

    void setNextHandler(std::shared_ptr<CoinHandler> handler) override;

    std::shared_ptr<CoinHandler> _next;

};


#endif  // COINBASEHANDLER_HPP
