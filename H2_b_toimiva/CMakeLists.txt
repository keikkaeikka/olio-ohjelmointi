cmake_minimum_required(VERSION 3.5)

project(H2_B LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2_B main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS H2_B
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
