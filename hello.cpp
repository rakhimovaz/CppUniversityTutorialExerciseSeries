// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

void Swap(int &a, int &b) {
    // students fill this
}

TEST_CASE( "Swapping two integer values", "[lesson:1]" ) {
    int x = 5, y = 10;
    Swap(x, y);
    REQUIRE( x == 10 );
    REQUIRE( y == 5 );
}