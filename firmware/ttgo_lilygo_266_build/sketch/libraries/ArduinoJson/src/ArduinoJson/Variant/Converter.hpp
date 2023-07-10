#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Variant/Converter.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

namespace ARDUINOJSON_NAMESPACE {

template <typename T, typename Enable = void>
struct Converter;

// clang-format off
template <typename T1, typename T2>
class InvalidConversion;  // Error here? See https://arduinojson.org/v6/invalid-conversion/
// clang-format on

}  // namespace ARDUINOJSON_NAMESPACE
