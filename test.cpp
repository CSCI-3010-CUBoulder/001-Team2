#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "functions_to_implement.cpp"

// Test for RemoveTwos()
TEST_CASE("Remove twos", "[functions_to_implement-twos]") {
	REQUIRE(RemoveTwos(2) == 1);
}

// Test for Sign()
TEST_CASE("Sign", "[functions_to_implement-sign]")
{
	REQUIRE(Sign(-2) == -1);
	REQUIRE(Sign(3) == 1);
}

// Test for AddN()
TEST_CASE("Add n", "[functions_to_implement-sign]")
{
	std::vector<int> vect{ 10, 20, 30 };
	
	AddN(vect, 1);
	REQUIRE(vect[0] == 11);
	REQUIRE(vect[1] == 21);
	REQUIRE(vect[2] == 31); 
} 
