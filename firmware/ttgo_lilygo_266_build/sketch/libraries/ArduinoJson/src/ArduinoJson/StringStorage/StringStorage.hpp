#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/StringStorage/StringStorage.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/StringStorage/StringCopier.hpp>
#include <ArduinoJson/StringStorage/StringMover.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <typename TInput>
StringCopier makeStringStorage(TInput&, MemoryPool& pool) {
  return StringCopier(pool);
}

template <typename TChar>
StringMover makeStringStorage(
    TChar* input, MemoryPool&,
    typename enable_if<!is_const<TChar>::value>::type* = 0) {
  return StringMover(reinterpret_cast<char*>(input));
}
}  // namespace ARDUINOJSON_NAMESPACE
