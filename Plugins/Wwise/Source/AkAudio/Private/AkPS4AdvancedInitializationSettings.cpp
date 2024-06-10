#include "AkPS4AdvancedInitializationSettings.h"

FAkPS4AdvancedInitializationSettings::FAkPS4AdvancedInitializationSettings() {
    (*this).ACPBatchBufferSize = 92160;
    (*this).UseHardwareCodecLowLatencyMode = false;
}

