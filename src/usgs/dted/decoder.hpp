#ifndef _DTED_DECODER_HPP_
#define _DTED_DECODER_HPP_

#include <vector>
#include <cstdint>

#include "usgs/dted/types.hpp"

namespace usgs
{
namespace dted
{
    
/**
 * Decodes some bytes into the UserHeaderLabel
 */
UserHeaderLabel decode(const std::vector<uint8_t> &bytes, int offset);
}
}

#endif