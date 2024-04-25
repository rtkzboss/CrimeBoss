#include "META_StoryMission.h"

UMETA_StoryMission::UMETA_StoryMission() {
}

void UMETA_StoryMission::SetWeaknessStrength(EMETA_AIBossStrengthChangeIntensity inNewStrength) {
}

void UMETA_StoryMission::SetTurfActionAfterSuccess(EMETA_TurfActionAfterSuccess inNewTurfAction) {
}

void UMETA_StoryMission::SetDataFromSave(const UObject* inWCO, const FMETA_StoryMissionSave& inStoryMissionSave) {
}

EMETA_AIBossStrengthChangeIntensity UMETA_StoryMission::GetWeaknessStrength() {
    return EMETA_AIBossStrengthChangeIntensity::None;
}

EMETA_TurfActionAfterSuccess UMETA_StoryMission::GetTurfActionAfterSuccess() {
    return EMETA_TurfActionAfterSuccess::None;
}

FMETA_StoryMissionSave UMETA_StoryMission::GetSaveData() {
    return FMETA_StoryMissionSave{};
}

FMETA_FPSMissionRowInfo UMETA_StoryMission::GetInfo() const {
    return FMETA_FPSMissionRowInfo{};
}


