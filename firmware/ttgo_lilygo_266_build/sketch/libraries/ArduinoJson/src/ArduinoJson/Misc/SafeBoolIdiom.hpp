#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Misc/SafeBoolIdiom.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Polyfills/type_traits.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <typename T>
class SafeBoolIdom {
 protected:
  typedef void (T::*bool_type)() const;
  void safeBoolHelper() const {}

  static bool_type safe_true() {
    return &SafeBoolIdom::safeBoolHelper;
  }

  static bool_type safe_false() {
    return 0;
  }
};

}  // namespace ARDUINOJSON_NAMESPACE
