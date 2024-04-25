#include "META_Ambush.h"
#include "Templates/SubclassOf.h"

UMETA_Ambush::UMETA_Ambush() {
}

void UMETA_Ambush::SetPreviousFPSMissionData(const FMETA_PreviousMissionData& inPreviousFPSMissionData) {
}

void UMETA_Ambush::SetInstigatorMissionID(TSubclassOf<UMETA_MissionID> inInstigatorMissionID) {
}

void UMETA_Ambush::SetDataFromSave(const FMETA_AmbushMissionSave& inAmbushMissionSave) {
}

FMETA_AmbushMissionSave UMETA_Ambush::GetSaveData() {
    return FMETA_AmbushMissionSave{};
}

FMETA_PreviousMissionData UMETA_Ambush::GetPreviousFPSMissionData() const {
    return FMETA_PreviousMissionData{};
}

FGameplayTag UMETA_Ambush::GetInstigatorMissionTileID() const {
    return FGameplayTag{};
}

TSubclassOf<UMETA_MissionID> UMETA_Ambush::GetInstigatorMissionID() const {
    return NULL;
}

FMETA_AmbushMissionRowInfo UMETA_Ambush::GetInfo() const {
    return FMETA_AmbushMissionRowInfo{};
}


