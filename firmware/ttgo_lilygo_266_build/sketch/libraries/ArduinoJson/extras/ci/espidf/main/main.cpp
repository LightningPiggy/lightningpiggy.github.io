#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/ci/espidf/main/main.cpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#include <ArduinoJson.h>

extern "C" void app_main() {
  char buffer[256];
  StaticJsonDocument<200> doc;

  doc["hello"] = "world";
  serializeJson(doc, buffer);
  deserializeJson(doc, buffer);
  serializeMsgPack(doc, buffer);
  deserializeMsgPack(doc, buffer);
}
