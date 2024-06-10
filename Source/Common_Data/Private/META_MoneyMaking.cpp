#include "META_MoneyMaking.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_JobResult.h"
#include "EMETA_LobbyVisibilityType.h"

UMETA_MoneyMaking::UMETA_MoneyMaking() {
}

void UMETA_MoneyMaking::SetDataFromSave(const UObject* inWCO, const FMETA_MoneyMakingMissionSave& inMoneyMakingMissionSave) {
}

FMETA_MoneyMakingMissionSave UMETA_MoneyMaking::GetSaveData() {
    return FMETA_MoneyMakingMissionSave{};
}

FMETA_FPSMissionRowInfo UMETA_MoneyMaking::GetInfo() const {
    return FMETA_FPSMissionRowInfo{};
}


