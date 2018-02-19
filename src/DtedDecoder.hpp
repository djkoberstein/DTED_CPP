#ifndef _DTED_DECODER_HPP_
#define _DTED_DECODER_HPP_

#include <vector>
#include <cstdint>

#include "DtedTypes.hpp"

namespace USGS {
    UserHeaderLabel decode(const std::vector<uint8_t> bytes, int offset);
}

#endif