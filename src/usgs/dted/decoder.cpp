#include "usgs/dted/decoder.hpp"

namespace usgs
{
namespace dted
{

UserHeaderLabel decode(const std::vector<uint8_t> &bytes, int offset)
{
    UserHeaderLabel *uhl = (UserHeaderLabel*)&bytes[0];
    return *uhl;
}
}
}