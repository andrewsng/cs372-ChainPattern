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
}
