#include "AkPS4InitializationSettings.h"

UAkPS4InitializationSettings::UAkPS4InitializationSettings() {
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 512;
    (*this).CommonSettings.StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).CommonSettings.NumberOfRefillsInVoice = 4;
}

void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


