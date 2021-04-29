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
