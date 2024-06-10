#include "AkXboxOneInitializationSettings.h"

UAkXboxOneInitializationSettings::UAkXboxOneInitializationSettings() {
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 512;
    (*this).CommonSettings.StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).CommonSettings.NumberOfRefillsInVoice = 4;
    (*this).CommunicationSettings.InitializeSystemComms = true;
    (*this).CommunicationSettings.PoolSize = 262144;
    (*this).CommunicationSettings.DiscoveryBroadcastPort = 24024;
    (*this).CommunicationSettings.CommandPort = 24025;
    (*this).CommunicationSettings.NotificationPort = 24026;
}

void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


