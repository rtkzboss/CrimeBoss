#include "AkCommonInitializationSettings.h"
#include "EAkChannelConfigType.h"
#include "EAkPanningRule.h"

FAkCommonInitializationSettings::FAkCommonInitializationSettings() {
    (*this).MaximumNumberOfMemoryPools = 256;
    (*this).MaximumNumberOfPositioningPaths = 255;
    (*this).CommandQueueSize = 262144;
    (*this).SamplesPerFrame = 1024;
    (*this).MainOutputSettings.AudioDeviceShareset = TEXT("");
    (*this).MainOutputSettings.DeviceID = 0;
    (*this).MainOutputSettings.PanningRule = EAkPanningRule::Speakers;
    (*this).MainOutputSettings.ChannelConfigType = EAkChannelConfigType::Anonymous;
    (*this).MainOutputSettings.ChannelMask = 0;
    (*this).MainOutputSettings.NumberOfChannels = 0;
    (*this).StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).NumberOfRefillsInVoice = 4;
    (*this).SpatialAudioSettings.MaxSoundPropagationDepth = 8;
    (*this).SpatialAudioSettings.MovementThreshold = 1.000000000e+01f;
    (*this).SpatialAudioSettings.NumberOfPrimaryRays = 100;
    (*this).SpatialAudioSettings.ReflectionOrder = 1;
    (*this).SpatialAudioSettings.MaximumPathLength = 1.000000000e+04f;
    (*this).SpatialAudioSettings.CPULimitPercentage = 0.000000000e+00f;
    (*this).SpatialAudioSettings.EnableDiffractionOnReflections = true;
    (*this).SpatialAudioSettings.EnableGeometricDiffractionAndTransmission = true;
    (*this).SpatialAudioSettings.CalcEmitterVirtualPosition = true;
    (*this).SpatialAudioSettings.UseObstruction = true;
    (*this).SpatialAudioSettings.UseOcclusion = true;
}

