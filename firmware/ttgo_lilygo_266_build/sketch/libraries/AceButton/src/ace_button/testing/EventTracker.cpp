#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/AceButton/src/ace_button/testing/EventTracker.cpp"
#include <Print.h>
#include "EventTracker.h"

namespace ace_button {
namespace testing {

void EventRecord::printTo(Print& printer) const {
  printer.print("pin: ");
  printer.print(mPin);
  printer.print("; eventType: ");
  printer.print(mEventType);
  printer.print("; buttonState: ");
  printer.print(mButtonState);
  printer.println();
}

void EventTracker::printTo(Print& printer) const {
  for (int i = 0; i < mNumEvents; i++) {
    printer.print(i);
    printer.print(": ");
    mRecords[i].printTo(printer);
  }
}

}
}
