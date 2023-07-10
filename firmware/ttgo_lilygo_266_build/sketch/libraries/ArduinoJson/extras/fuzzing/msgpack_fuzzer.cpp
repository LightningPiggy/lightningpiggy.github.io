#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/fuzzing/msgpack_fuzzer.cpp"
#include <ArduinoJson.h>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  DynamicJsonDocument doc(4096);
  DeserializationError error = deserializeMsgPack(doc, data, size);
  if (!error) {
    std::string json;
    serializeMsgPack(doc, json);
  }
  return 0;
}
