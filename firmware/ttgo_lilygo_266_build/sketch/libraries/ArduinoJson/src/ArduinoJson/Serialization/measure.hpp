#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Serialization/measure.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Serialization/Writers/DummyWriter.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <template <typename> class TSerializer, typename TSource>
size_t measure(const TSource &source) {
  DummyWriter dp;
  TSerializer<DummyWriter> serializer(dp);
  return source.accept(serializer);
}

}  // namespace ARDUINOJSON_NAMESPACE
