#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Polyfills/static_array.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Configuration.hpp>

#if ARDUINOJSON_ENABLE_PROGMEM

#  include <ArduinoJson/Polyfills/pgmspace_generic.hpp>

#  ifndef ARDUINOJSON_DEFINE_PROGMEM_ARRAY
#    define ARDUINOJSON_DEFINE_PROGMEM_ARRAY(type, name, value) \
      static type const name[] PROGMEM = value;
#  endif

#  define ARDUINOJSON_DEFINE_STATIC_ARRAY ARDUINOJSON_DEFINE_PROGMEM_ARRAY

#  define ARDUINOJSON_READ_STATIC_ARRAY(type, name, index) \
    pgm_read<type>(name + index)

#else  // i.e. ARDUINOJSON_ENABLE_PROGMEM == 0

#  define ARDUINOJSON_DEFINE_STATIC_ARRAY(type, name, value) \
    static type const name[] = value;

#  define ARDUINOJSON_READ_STATIC_ARRAY(type, name, index) name[index]

#endif
