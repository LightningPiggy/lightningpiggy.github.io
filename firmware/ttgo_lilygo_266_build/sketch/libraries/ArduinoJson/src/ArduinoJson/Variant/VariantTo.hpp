#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Variant/VariantTo.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Namespace.hpp>

namespace ARDUINOJSON_NAMESPACE {
class ArrayRef;
class ObjectRef;
class VariantRef;

// A metafunction that returns the type of the value returned by
// VariantRef::to<T>()
template <typename T>
struct VariantTo {};

template <>
struct VariantTo<ArrayRef> {
  typedef ArrayRef type;
};
template <>
struct VariantTo<ObjectRef> {
  typedef ObjectRef type;
};
template <>
struct VariantTo<VariantRef> {
  typedef VariantRef type;
};

}  // namespace ARDUINOJSON_NAMESPACE
