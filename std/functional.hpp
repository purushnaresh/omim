#pragma once
#include "common_defines.hpp"

#ifdef new
#undef new
#endif

#include <functional>
using std::greater;
using std::less;
using std::equal_to;

#ifdef DEBUG_NEW
#define new DEBUG_NEW
#endif
