#include "META_MissionsStatistic.h"

FMETA_MissionsStatistic::FMETA_MissionsStatistic() {
    auto& gen1721 = (*this).FinishedMissions;
    gen1721.Empty();
    auto& gen1722 = (*this).LostMissions;
    gen1722.Empty();
    auto& gen1723 = (*this).FinishedBigHeists;
    gen1723.Empty();
    (*this).CountOftFinishedBigHeists = 0;
    (*this).CountOfLostBigHeists = 0;
    auto& gen1724 = (*this).FinishedMissionWithoutKills;
    gen1724.Empty();
    (*this).MissionWithStels = 0;
    (*this).FinishedMissionWithStels = 0;
    (*this).PlayedAmbushes = 0;
    (*this).SurvivedAmbushes = 0;
    (*this).PlayedWarehouseSiege = 0;
}

