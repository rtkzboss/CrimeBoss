#include "AkWindowsInitializationSettings.h"

UAkWindowsInitializationSettings::UAkWindowsInitializationSettings() {
    (*this).CommonSettings.SampleRate = 48000;
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 1024;
    (*this).CommonSettings.StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).CommonSettings.NumberOfRefillsInVoice = 4;
    (*this).CommonSettings.SpatialAudioSettings.MaxSoundPropagationDepth = 4;
    (*this).CommonSettings.SpatialAudioSettings.MovementThreshold = 2.000000000e+01f;
    (*this).CommonSettings.SpatialAudioSettings.NumberOfPrimaryRays = 25;
    (*this).CommonSettings.SpatialAudioSettings.ReflectionOrder = 1;
    (*this).CommonSettings.SpatialAudioSettings.MaximumPathLength = 5.000000000e+03f;
    (*this).CommonSettings.SpatialAudioSettings.EnableGeometricDiffractionAndTransmission = true;
    (*this).CommonSettings.SpatialAudioSettings.CalcEmitterVirtualPosition = true;
    (*this).CommonSettings.SpatialAudioSettings.UseObstruction = true;
    (*this).CommonSettings.SpatialAudioSettings.UseOcclusion = true;
    (*this).CommunicationSettings.InitializeSystemComms = true;
    (*this).CommunicationSettings.PoolSize = 1310720;
    (*this).CommunicationSettings.DiscoveryBroadcastPort = 24024;
    (*this).AdvancedSettings.MaxSystemAudioObjects = 128;
    (*this).AdvancedSettings.IO_MemorySize = 2097152;
    (*this).AdvancedSettings.IO_Granularity = 32768;
    (*this).AdvancedSettings.TargetAutoStreamBufferLength = 3.800000000e+02f;
    (*this).AdvancedSettings.MaximumPinnedBytesInCache = 4294967295;
    (*this).AdvancedSettings.ContinuousPlaybackLookAhead = 1;
    (*this).AdvancedSettings.MonitorQueuePoolSize = 65536;
    (*this).AdvancedSettings.MaximumHardwareTimeoutMs = 1000;
    (*this).AdvancedSettings.DebugOutOfRangeLimit = 1.600000000e+01f;
}

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


