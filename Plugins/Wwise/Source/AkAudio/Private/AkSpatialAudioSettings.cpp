#include "AkSpatialAudioSettings.h"

FAkSpatialAudioSettings::FAkSpatialAudioSettings() {
    (*this).MaxSoundPropagationDepth = 8;
    (*this).MovementThreshold = 1.000000000e+01f;
    (*this).NumberOfPrimaryRays = 100;
    (*this).ReflectionOrder = 1;
    (*this).MaximumPathLength = 1.000000000e+04f;
    (*this).CPULimitPercentage = 0.000000000e+00f;
    (*this).EnableDiffractionOnReflections = true;
    (*this).EnableGeometricDiffractionAndTransmission = true;
    (*this).CalcEmitterVirtualPosition = true;
    (*this).UseObstruction = true;
    (*this).UseOcclusion = true;
}

