#include "META_MissionsStatistic.h"

FMETA_MissionsStatistic::FMETA_MissionsStatistic() {
    (*this).FinishedMissions.Empty();
    (*this).LostMissions.Empty();
    (*this).FinishedBigHeists.Empty();
    (*this).CountOftFinishedBigHeists = 0;
    (*this).CountOfLostBigHeists = 0;
    (*this).FinishedMissionWithoutKills.Empty();
    (*this).MissionWithStels = 0;
    (*this).FinishedMissionWithStels = 0;
    (*this).PlayedAmbushes = 0;
    (*this).SurvivedAmbushes = 0;
    (*this).PlayedWarehouseSiege = 0;
}

