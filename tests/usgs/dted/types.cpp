#include <iostream>
#include "usgs/dted/types.hpp"
#include "tests/catch.hpp"

namespace usgs
{
namespace dted
{

TEST_CASE("UserHeaderLabel size", "[factorial]")
{
	REQUIRE(sizeof(UserHeaderLabel) == 80);
}

TEST_CASE("DataSetIdentification size", "[factorial]")
{
	REQUIRE(sizeof(DataSetIdentification) == 648);
}

TEST_CASE("AccuracyDescriptionRecord size", "[factorial]")
{
	REQUIRE(sizeof(AccuracyDescriptionRecord) == 2700);
}
}
}
