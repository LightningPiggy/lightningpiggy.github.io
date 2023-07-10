#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/JsonDocument/add.cpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#include <ArduinoJson.h>
#include <catch.hpp>

TEST_CASE("JsonDocument::add()") {
  DynamicJsonDocument doc(4096);

  SECTION("integer") {
    doc.add(42);

    REQUIRE(doc.as<std::string>() == "[42]");
  }

  SECTION("const char*") {
    doc.add("hello");

    REQUIRE(doc.as<std::string>() == "[\"hello\"]");
  }
}
