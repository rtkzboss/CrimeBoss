#include "IGS_MenuCommonData_Base.h"

UIGS_MenuCommonData_Base::UIGS_MenuCommonData_Base() {
    this->AmountOfMissionsCanBeCompletedByEachHeisterPerDay = 1;
}

EIGS_ScenarioDifficulty UIGS_MenuCommonData_Base::GetRandomizedDifficulty(EMETA_RespectLvl inRespectLvl) const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

FGameplayTag UIGS_MenuCommonData_Base::GetEdgeCaseObjective() const {
    return FGameplayTag{};
}

FGameplayTag UIGS_MenuCommonData_Base::GetBossCharacterTagID() const {
    return FGameplayTag{};
}

int32 UIGS_MenuCommonData_Base::GetAmountOfMissionsCanBeCompletedByEachHeisterPerDay() const {
    return 0;
}

FGameplayTagContainer UIGS_MenuCommonData_Base::GetAllowedLoot() const {
    return FGameplayTagContainer{};
}


