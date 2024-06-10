#include "META_CrewManagerSaveData.h"

FMETA_CrewManagerSaveData::FMETA_CrewManagerSaveData() {
    auto& gen2220 = (*this).GenericCrewHeisters;
    gen2220.Empty();
    auto& gen2221 = (*this).UniqueCrewHeisters;
    gen2221.Empty();
    auto& gen2222 = (*this).GenericHeistersOnJob;
    gen2222.Empty();
    auto& gen2223 = (*this).UniqueHeistersOnJob;
    gen2223.Empty();
    auto& gen2224 = (*this).RemovedHeisters;
    gen2224.Empty();
    (*this).RemainAmountOfCompletedMissionsBeforeUnlock = 0;
}

