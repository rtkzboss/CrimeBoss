#include "AkPS5InitializationSettings.h"

UAkPS5InitializationSettings::UAkPS5InitializationSettings() {
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 512;
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
}


