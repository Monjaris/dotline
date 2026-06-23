#pragma once
#include <iostream>
#include <cstdint>

#define NAMESPACE_START(_name) namespace _name {
#define NAMESPACE_END(_name) }

using uint32 = uint32_t;
using usize = size_t;
using int64 = int64_t;
using string = std::string;
using strview = std::string_view;
