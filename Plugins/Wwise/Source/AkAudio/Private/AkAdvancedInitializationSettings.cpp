#include "AkAdvancedInitializationSettings.h"

FAkAdvancedInitializationSettings::FAkAdvancedInitializationSettings() {
    (*this).IO_MemorySize = 2097152;
    (*this).IO_Granularity = 32768;
    (*this).TargetAutoStreamBufferLength = 3.800000000e+02f;
    (*this).UseStreamCache = false;
    (*this).MaximumPinnedBytesInCache = 4294967295;
    (*this).EnableGameSyncPreparation = false;
    (*this).ContinuousPlaybackLookAhead = 1;
    (*this).MonitorQueuePoolSize = 1048576;
    (*this).MaximumHardwareTimeoutMs = 1000;
    (*this).DebugOutOfRangeCheckEnabled = false;
    (*this).DebugOutOfRangeLimit = 1.600000000e+01f;
}

