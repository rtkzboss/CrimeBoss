#include "META_PoliceAmbushConfig.h"

FMETA_PoliceAmbushConfig::FMETA_PoliceAmbushConfig() {
    (*this).PoliceAmbush = 0;
    (*this).MissionWasDoneInStealth = -20;
    (*this).MissionEndedWith3PoliceBadges = 5;
    (*this).MissionEndedWith4PoliceBadges = 10;
    (*this).MissionEndedWith5PoliceBadges = 15;
    (*this).DetectiveOnTile = 50;
    (*this).DetectiveActiveAnywhere = 20;
    (*this).HeatVeryLow = -4;
    (*this).HeatLow = 0;
    (*this).HeatMedium = 4;
    (*this).HeatHigh = 8;
    (*this).HeatVeryHigh = 12;
}

