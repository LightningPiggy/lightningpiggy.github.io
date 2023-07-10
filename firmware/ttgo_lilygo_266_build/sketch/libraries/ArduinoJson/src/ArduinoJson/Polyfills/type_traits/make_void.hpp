#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/type_traits/make_void.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

namespace ARDUINOJSON_NAMESPACE {

template <class = void>
struct make_void {
  typedef void type;
};

}  // namespace ARDUINOJSON_NAMESPACE
