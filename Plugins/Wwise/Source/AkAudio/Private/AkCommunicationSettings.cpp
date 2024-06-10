#include "AkCommunicationSettings.h"

FAkCommunicationSettings::FAkCommunicationSettings() {
    (*this).PoolSize = 262144;
    (*this).DiscoveryBroadcastPort = 24024;
    (*this).CommandPort = 0;
    (*this).NotificationPort = 0;
    (*this).NetworkName = TEXT("");
}

