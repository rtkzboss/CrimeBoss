#include "AkXboxOneGDKAdvancedInitializationSettings.h"

FAkXboxOneGDKAdvancedInitializationSettings::FAkXboxOneGDKAdvancedInitializationSettings() {
    (*this).MaximumNumberOfXMAVoices = 128;
    (*this).UseHardwareCodecLowLatencyMode = false;
}

