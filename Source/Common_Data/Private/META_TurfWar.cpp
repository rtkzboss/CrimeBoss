#include "META_TurfWar.h"

UMETA_TurfWar::UMETA_TurfWar() {
}

void UMETA_TurfWar::SetWarTile(FGameplayTag inNewWarTile) {
}

void UMETA_TurfWar::SetPLayersSoldiersAmount(int32 inNewSoldiersAmount) {
}

void UMETA_TurfWar::SetEnemyGang(EMETA_Gang inEnemyGang) {
}

void UMETA_TurfWar::SetDataFromSave(const FMETA_TurfWarMissionSave& inTurfWarMissionSave) {
}

FGameplayTag UMETA_TurfWar::GetWarTile() const {
    return FGameplayTag{};
}

FMETA_TurfWarMissionSave UMETA_TurfWar::GetSaveData() {
    return FMETA_TurfWarMissionSave{};
}

int32 UMETA_TurfWar::GetPLayersSoldiersAmount() const {
    return 0;
}

EMETA_Gang UMETA_TurfWar::GetEnemyGang() {
    return EMETA_Gang::None;
}

int32 UMETA_TurfWar::GetDefenseLosePenaltyCost(const UObject* inWCO) {
    return 0;
}


