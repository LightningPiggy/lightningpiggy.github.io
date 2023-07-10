#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/mpl/max.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Namespace.hpp>

#include <stddef.h>  // for size_t

namespace ARDUINOJSON_NAMESPACE {

// A meta-function that returns the highest value
template <size_t X, size_t Y, bool MaxIsX = (X > Y)>
struct Max {};

template <size_t X, size_t Y>
struct Max<X, Y, true> {
  static const size_t value = X;
};

template <size_t X, size_t Y>
struct Max<X, Y, false> {
  static const size_t value = Y;
};
}  // namespace ARDUINOJSON_NAMESPACE
