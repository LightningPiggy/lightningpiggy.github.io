#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Strings/Adapters/JsonString.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Strings/Adapters/RamString.hpp>
#include <ArduinoJson/Strings/IsString.hpp>
#include <ArduinoJson/Strings/String.hpp>

namespace ARDUINOJSON_NAMESPACE {

inline SizedRamString adaptString(const String& s) {
  return SizedRamString(s.c_str(), s.size());
}

template <>
struct IsString<String> : true_type {};

}  // namespace ARDUINOJSON_NAMESPACE
