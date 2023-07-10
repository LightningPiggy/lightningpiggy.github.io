#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/type_traits/remove_cv.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Namespace.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <typename T>
struct remove_cv {
  typedef T type;
};
template <typename T>
struct remove_cv<const T> {
  typedef T type;
};
template <typename T>
struct remove_cv<volatile T> {
  typedef T type;
};
template <typename T>
struct remove_cv<const volatile T> {
  typedef T type;
};
}  // namespace ARDUINOJSON_NAMESPACE
