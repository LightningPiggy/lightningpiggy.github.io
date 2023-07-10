#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/Misc/custom_string.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <string>

struct custom_char_traits : std::char_traits<char> {};
struct custom_allocator : std::allocator<char> {};
typedef std::basic_string<char, custom_char_traits, custom_allocator>
    custom_string;
