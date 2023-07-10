#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/RF24/utility/RPi/compatibility.cpp"
#include "compatibility.h"
#include <chrono>

auto start = std::chrono::steady_clock::now();

uint32_t millis(void)
{
    auto end = std::chrono::steady_clock::now();
	
	return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
}
