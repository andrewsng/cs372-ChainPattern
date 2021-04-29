#include "coinhandler.hpp"
#include <iostream>


int main()
{
    auto penny = makePenny();
    auto nickel = makeNickel();
    auto dime = makeDime();
    auto quarter = makeQuarter();

    std::cout << penny->getValue() << "\n";
    std::cout << nickel->getValue() << "\n";
    std::cout << dime->getValue() << "\n";
    std::cout << quarter->getValue() << "\n";
    
    std::cout << "\n";
    
    auto pennyHandler = makePennyHandler();
    auto nickelHandler = makeNickelHandler();
    auto dimeHandler = makeDimeHandler();
    auto quarterHandler = makeQuarterHandler();
    
    pennyHandler->setNext(nickelHandler);
    nickelHandler->setNext(dimeHandler);
    dimeHandler->setNext(quarterHandler);
    
    pennyHandler->handle(penny);
    pennyHandler->handle(nickel);
    pennyHandler->handle(dime);
    pennyHandler->handle(quarter);
}
