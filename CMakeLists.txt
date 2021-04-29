cmake_minimum_required(VERSION 3.15)

project(cs372-ChainPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(ChainPattern
    main.cpp
    coin.cpp
    cointypes.cpp
    coinhandler.cpp
    coinbasehandler.cpp
    cointypehandlers.cpp
    )
