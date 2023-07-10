#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/JsonVariant/add.cpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#include <ArduinoJson.h>
#include <stdint.h>
#include <catch.hpp>

TEST_CASE("JsonVariant::add()") {
  DynamicJsonDocument doc(4096);
  JsonVariant var = doc.to<JsonVariant>();

  SECTION("add integer to new variant") {
    var.add(42);

    REQUIRE(var.as<std::string>() == "[42]");
  }

  SECTION("add const char* to new variant") {
    var.add("hello");

    REQUIRE(var.as<std::string>() == "[\"hello\"]");
  }

  SECTION("add std::string to new variant") {
    var.add(std::string("hello"));

    REQUIRE(var.as<std::string>() == "[\"hello\"]");
  }

  SECTION("add integer to integer") {
    var.set(123);

    var.add(456);  // no-op

    REQUIRE(var.as<std::string>() == "123");
  }

  SECTION("add integer to object") {
    var["val"] = 123;

    var.add(456);  // no-op

    REQUIRE(var.as<std::string>() == "{\"val\":123}");
  }
}
