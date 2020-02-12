#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "functions_to_implement.cpp"

TEST_CASE("Remove twos") {
	REQUIRE(RemoveTwos(2) == 1);
}

TEST_CASE("Sign")
{
	REQUIRE(Sign(-2) == -1);
	REQUIRE(Sign(3) == 1);
}

TEST_CASE
{
	vector <double> n = {1, 2};
	AddN(n, 3);
	REQUIRE(n[0] == 4);
	REQUIRE(n[1] == 5);
}
