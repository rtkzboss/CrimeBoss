#include "AkLinuxInitializationSettings.h"

UAkLinuxInitializationSettings::UAkLinuxInitializationSettings() {
    (*this).AdvancedSettings.IO_MemorySize = 2097152;
    (*this).AdvancedSettings.IO_Granularity = 32768;
    (*this).AdvancedSettings.TargetAutoStreamBufferLength = 3.800000000e+02f;
    (*this).AdvancedSettings.MaximumPinnedBytesInCache = 4294967295;
    (*this).AdvancedSettings.ContinuousPlaybackLookAhead = 1;
    (*this).AdvancedSettings.MonitorQueuePoolSize = 65536;
    (*this).AdvancedSettings.MaximumHardwareTimeoutMs = 1000;
    (*this).AdvancedSettings.DebugOutOfRangeLimit = 1.600000000e+01f;
}

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


