#include "META_CrewManagerSaveData.h"

FMETA_CrewManagerSaveData::FMETA_CrewManagerSaveData() {
    (*this).GenericCrewHeisters.Empty();
    (*this).UniqueCrewHeisters.Empty();
    (*this).GenericHeistersOnJob.Empty();
    (*this).UniqueHeistersOnJob.Empty();
    (*this).RemovedHeisters.Empty();
    (*this).RemainAmountOfCompletedMissionsBeforeUnlock = 0;
}

