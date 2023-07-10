#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Strings/Adapters/StringView.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Strings/Adapters/RamString.hpp>

#include <string_view>

namespace ARDUINOJSON_NAMESPACE {

inline SizedRamString adaptString(const std::string_view& s) {
  return SizedRamString(s.data(), s.size());
}

template <>
struct IsString<std::string_view> : true_type {};

}  // namespace ARDUINOJSON_NAMESPACE
