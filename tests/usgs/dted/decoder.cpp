
#include <iostream>
#include <string.h>

#include "usgs/dted/decoder.hpp"
#include "tests/catch.hpp"

namespace usgs
{
namespace dted
{

TEST_CASE("decode valid UserHeaderLabel", "[factorial]")
{
	std::string uhlString("UHL10800000W0430000N030003000200U              012101210                        DSI");
	std::vector<uint8_t> uhlBytes(uhlString.begin(), uhlString.end());
	UserHeaderLabel uhl = decode(uhlBytes, 0);
	REQUIRE(strncmp(uhl.RecognitionSentinel, "UHL", 3) == 0);
}

}
}
