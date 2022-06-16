#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Functions.hpp"
#include <vector>

TEST_CASE( "Arguments initialized") {
    vector<int> v {4, 2, 3};
    int t = minind(v);
    REQUIRE( t == 2 );
}
