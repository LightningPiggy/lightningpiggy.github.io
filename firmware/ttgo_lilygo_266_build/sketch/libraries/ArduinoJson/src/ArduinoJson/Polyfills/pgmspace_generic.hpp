#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/pgmspace_generic.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Namespace.hpp>
#include <ArduinoJson/Polyfills/pgmspace.hpp>
#include <ArduinoJson/Polyfills/type_traits.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <typename T>
typename enable_if<is_pointer<T>::value, T>::type pgm_read(const void* p) {
  return reinterpret_cast<T>(pgm_read_ptr(p));
}

template <typename T>
typename enable_if<is_same<T, uint32_t>::value, T>::type pgm_read(
    const void* p) {
  return pgm_read_dword(p);
}

}  // namespace ARDUINOJSON_NAMESPACE
