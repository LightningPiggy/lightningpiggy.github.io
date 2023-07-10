#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/JsonDocument/cast.cpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#include <ArduinoJson.h>
#include <catch.hpp>

#include <string>

TEST_CASE("Implicit cast to JsonVariant") {
  StaticJsonDocument<128> doc;

  doc["hello"] = "world";

  JsonVariant var = doc;

  CHECK(var.as<std::string>() == "{\"hello\":\"world\"}");
}
