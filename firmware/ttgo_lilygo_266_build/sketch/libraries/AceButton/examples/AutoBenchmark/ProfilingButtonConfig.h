#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/AceButton/examples/AutoBenchmark/ProfilingButtonConfig.h"
#ifndef PROFILING_BUTTON_CONFIG_H
#define PROFILING_BUTTON_CONFIG_H

#include <Arduino.h> // LOW, HIGH
#include <AceButton.h>

namespace ace_button {

/**
 * A subclass of ButtonConfig which overrides readButton() so that the
 * AutoBenchmark sketch can inject button clicks into the AceButton::check()
 * loop, which we can use to collect timing stats.
 */
class ProfilingButtonConfig: public ButtonConfig {
  public:
    ProfilingButtonConfig():
        mButtonState(HIGH) {}

    int readButton(uint8_t /* pin */) override { return mButtonState; }

    /** Set the state of the fake physical button. */
    void setButtonState(int buttonState) { mButtonState = buttonState; }

  private:
    // Disable copy-constructor and assignment operator
    ProfilingButtonConfig(const ProfilingButtonConfig&) = delete;
    ProfilingButtonConfig& operator=(const ProfilingButtonConfig&) = delete;

    int mButtonState;
};

}
#endif
