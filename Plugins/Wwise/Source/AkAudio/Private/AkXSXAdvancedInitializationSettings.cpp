#include "AkXSXAdvancedInitializationSettings.h"

FAkXSXAdvancedInitializationSettings::FAkXSXAdvancedInitializationSettings() {
    (*this).MaximumNumberOfXMAVoices = 0;
    (*this).UseHardwareCodecLowLatencyMode = false;
    (*this).MaximumNumberOfOpusVoices = 320;
    (*this).uMaxSystemAudioObjects = 256;
}

