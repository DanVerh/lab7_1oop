#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Functions.hpp"
#include <vector>
#include <algorithm>

TEST_CASE( "Arguments initialized") {
    vector<int> v {4, 2, 3, 1, 5};
    long int t = minind(v);
    REQUIRE( t == 3 );
}
