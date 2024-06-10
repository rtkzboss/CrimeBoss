#include "META_AmbushConfig.h"

FMETA_AmbushConfig::FMETA_AmbushConfig() {
    (*this).PoliceChances.PoliceAmbush = 0;
    (*this).PoliceChances.MissionWasDoneInStealth = -20;
    (*this).PoliceChances.MissionEndedWith3PoliceBadges = 5;
    (*this).PoliceChances.MissionEndedWith4PoliceBadges = 10;
    (*this).PoliceChances.MissionEndedWith5PoliceBadges = 15;
    (*this).PoliceChances.DetectiveOnTile = 50;
    (*this).PoliceChances.DetectiveActiveAnywhere = 20;
    (*this).PoliceChances.HeatVeryLow = -4;
    (*this).PoliceChances.HeatLow = 0;
    (*this).PoliceChances.HeatMedium = 4;
    (*this).PoliceChances.HeatHigh = 8;
    (*this).PoliceChances.HeatVeryHigh = 12;
    (*this).GangsChances.NoGangsterKilledInMission = -5;
    (*this).GangsChances.MissionWasDoneInStealth = -20;
    (*this).GangsChances.BossInTopEnemyList = 20;
    (*this).GangsChances.BossIsInGangsEnemyList = 20;
}

