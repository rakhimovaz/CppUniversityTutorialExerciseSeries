// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

std::string HelloWorld() {
    
    return "Hello, World!";
}

TEST_CASE( "Hello, World!", "[lesson:1]" ) {
    REQUIRE( HelloWorld() == "Hello, World!" );
}