#include "AkSwitchInitializationSettings.h"
#include "EAkCommSystem.h"

UAkSwitchInitializationSettings::UAkSwitchInitializationSettings() {
    (*this).CommunicationSettings.PoolSize = 262144;
    (*this).CommunicationSettings.DiscoveryBroadcastPort = 24024;
    (*this).CommunicationSettings.CommandPort = 24025;
    (*this).CommunicationSettings.NotificationPort = 24026;
}

void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
}


