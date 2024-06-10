#include "AkAndroidInitializationSettings.h"
#include "EAkChannelConfigType.h"
#include "EAkPanningRule.h"

UAkAndroidInitializationSettings::UAkAndroidInitializationSettings() {
    (*this).CommonSettings.SampleRate = 48000;
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 1024;
    (*this).CommonSettings.MainOutputSettings.PanningRule = EAkPanningRule::Headphones;
    (*this).CommonSettings.MainOutputSettings.ChannelConfigType = EAkChannelConfigType::Standard;
    (*this).CommonSettings.MainOutputSettings.ChannelMask = 3;
    (*this).CommonSettings.StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).CommonSettings.NumberOfRefillsInVoice = 4;
    (*this).AdvancedSettings.AudioAPI = 3;
    (*this).AdvancedSettings.RoundFrameSizeToHardwareSize = true;
    (*this).AdvancedSettings.IO_MemorySize = 2097152;
    (*this).AdvancedSettings.IO_Granularity = 32768;
    (*this).AdvancedSettings.TargetAutoStreamBufferLength = 3.800000000e+02f;
    (*this).AdvancedSettings.MaximumPinnedBytesInCache = 4294967295;
    (*this).AdvancedSettings.ContinuousPlaybackLookAhead = 1;
    (*this).AdvancedSettings.MonitorQueuePoolSize = 65536;
    (*this).AdvancedSettings.MaximumHardwareTimeoutMs = 1000;
    (*this).AdvancedSettings.DebugOutOfRangeLimit = 1.600000000e+01f;
}

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


