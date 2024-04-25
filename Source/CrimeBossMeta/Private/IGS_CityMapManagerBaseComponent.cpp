#include "IGS_CityMapManagerBaseComponent.h"

UIGS_CityMapManagerBaseComponent::UIGS_CityMapManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_CityMapManagerBaseComponent::SelectMission_Implementation(UMETA_BaseMission* inMission) {
}

bool UIGS_CityMapManagerBaseComponent::IsCurrentBossTeritoryUnderAttack_Implementation() {
    return false;
}

EMETA_TurfMissionDifficulty UIGS_CityMapManagerBaseComponent::GetTurfMissionDifficulty_Implementation(int32 inAiSoldiersAmount) {
    return EMETA_TurfMissionDifficulty::None;
}

void UIGS_CityMapManagerBaseComponent::GetTileWithMission_Implementation(const UMETA_BaseMission* inMission, FGameplayTag& outTileID) {
}

int32 UIGS_CityMapManagerBaseComponent::GetTileStrength_Implementation(FGameplayTag inTileID) {
    return 0;
}

int32 UIGS_CityMapManagerBaseComponent::GetPlayersTurfCount_Implementation() {
    return 0;
}

int32 UIGS_CityMapManagerBaseComponent::GetGangsTurfCount_Implementation(EMETA_Gang inGang) {
    return 0;
}

int32 UIGS_CityMapManagerBaseComponent::GetAiBossStrength_Implementation(EMETA_Gang inBossGang) {
    return 0;
}

int32 UIGS_CityMapManagerBaseComponent::GetAiArmyStrengthOnTileForGang_Implementation(FGameplayTag inTileID, EMETA_Gang inBossGang) {
    return 0;
}

void UIGS_CityMapManagerBaseComponent::GetAiArmySizeOnTileForGang_Implementation(FGameplayTag inTileID, EMETA_Gang inBossGang, int32& outAiArmySize, int32& outAiSoldiersSpawnedAtOnce, int32& outPlayersSoldiersSpawnedAtOnce) {
}


