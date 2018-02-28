#ifndef _DTED_ENCODER_HPP_
#define _DTED_ENCODER_HPP_

#include <vector>
#include <cstdint>

#include "usgs/dted/types.hpp"

namespace usgs
{
namespace dted
{

std::vector<uint8_t> encode(const UserHeaderLabel &bytes, int offset);

}
}

#endif