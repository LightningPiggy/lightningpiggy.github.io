#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/type_traits/is_floating_point.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include "integral_constant.hpp"
#include "is_same.hpp"
#include "remove_cv.hpp"

namespace ARDUINOJSON_NAMESPACE {

template <class T>
struct is_floating_point
    : integral_constant<
          bool,  //
          is_same<float, typename remove_cv<T>::type>::value ||
              is_same<double, typename remove_cv<T>::type>::value> {};

}  // namespace ARDUINOJSON_NAMESPACE
