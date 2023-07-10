#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Strings/Adapters/StdString.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Strings/Adapters/RamString.hpp>

#include <string>

namespace ARDUINOJSON_NAMESPACE {

template <typename TCharTraits, typename TAllocator>
inline SizedRamString adaptString(
    const std::basic_string<char, TCharTraits, TAllocator>& s) {
  return SizedRamString(s.c_str(), s.size());
}

template <typename TCharTraits, typename TAllocator>
struct IsString<std::basic_string<char, TCharTraits, TAllocator> > : true_type {
};

}  // namespace ARDUINOJSON_NAMESPACE
