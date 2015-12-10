project(KittyPryde)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -pthread")
enable_testing()

set(sources
   main.cpp
   PrimeFactorsTest.cpp)
add_executable(PrimeFactorsTest ${sources})
target_link_libraries(PrimeFactorsTest pthread)
target_link_libraries(PrimeFactorsTest gmock)
target_link_libraries(PrimeFactorsTest gtest)
add_dependencies(PrimeFactorsTest gmock)
add_test(PrimeFactorsTest PrimeFactorsTest)
