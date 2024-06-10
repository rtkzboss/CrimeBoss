#include "AkAndroidAdvancedInitializationSettings.h"

FAkAndroidAdvancedInitializationSettings::FAkAndroidAdvancedInitializationSettings() {
    (*this).AudioAPI = 3;
    (*this).RoundFrameSizeToHardwareSize = true;
}

