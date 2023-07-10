#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/Cpp20/smoke_test.cpp"
#include <ArduinoJson.h>

#include <catch.hpp>
#include <string>

TEST_CASE("C++20 smoke test") {
  StaticJsonDocument<128> doc;

  deserializeJson(doc, "{\"hello\":\"world\"}");
  REQUIRE(doc["hello"] == "world");

  std::string json;
  serializeJson(doc, json);
  REQUIRE(json == "{\"hello\":\"world\"}");
}
