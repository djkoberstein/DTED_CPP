
#include <iostream>
#include <string.h>

#include "usgs/dted/decoder.hpp"
#include "tests/catch.hpp"

namespace usgs
{
namespace dted
{

std::vector<uint8_t> getValidUhlString()
{
	std::string uhlString("UHL10800000W0430000N030003000200U              012101210                        DSI");
	std::vector<uint8_t> uhlBytes(uhlString.begin(), uhlString.end());
	return uhlBytes;
}

TEST_CASE("decode valid UserHeaderLabel", "[factorial]")
{
	std::vector<uint8_t> uhlBytes = getValidUhlString();
	UserHeaderLabel uhl = decode(uhlBytes, 0);
	REQUIRE(strncmp(uhl.RecognitionSentinel, "UHL", 3) == 0);
	REQUIRE(uhl.FixedByStandard == '1');
}

}
}
