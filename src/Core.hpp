#pragma once
#include <unistd.h>
#include <termios.h>
#include <cstring>


#define DOTL_NAMESPACE_BEGIN(_namespace_name)  namespace _namespace_name {
#define DOTL_NAMESPACE_END()    };


using usize = std::size_t;
using isize = ssize_t;
using int32 = int32_t;
using int64 = int64_t;
using uint32 = uint32_t;
using uint64 = uint64_t;

