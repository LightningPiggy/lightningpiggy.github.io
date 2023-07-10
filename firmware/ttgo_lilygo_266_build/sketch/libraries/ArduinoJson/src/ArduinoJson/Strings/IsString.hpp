#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Strings/IsString.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Polyfills/type_traits.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <typename T, typename Enable = void>
struct IsString : false_type {};

template <typename TChar>
struct IsString<const TChar*> : IsString<TChar*> {};

}  // namespace ARDUINOJSON_NAMESPACE
