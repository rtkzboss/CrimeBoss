#include "AkXboxOneAdvancedInitializationSettings.h"

FAkXboxOneAdvancedInitializationSettings::FAkXboxOneAdvancedInitializationSettings() {
    (*this).MaximumNumberOfXMAVoices = 128;
    (*this).UseHardwareCodecLowLatencyMode = false;
}

