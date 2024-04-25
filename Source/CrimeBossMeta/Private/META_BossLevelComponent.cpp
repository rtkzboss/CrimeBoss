#include "META_BossLevelComponent.h"

UMETA_BossLevelComponent::UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossLevelData = NULL;
    this->AmountOfPrimaryWeaponsIssued = 0;
    this->AmountOfAdditionalEquipmentIssued = 0;
    this->LocalBossPointAfterAsset = 0.00f;
    this->PreviousLevel = 0;
    this->PreviousPoints = 0.00f;
}

TArray<FMETA_PerkData> UMETA_BossLevelComponent::CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, TArray<FMETA_PerkData>& inCurrentPerks) {
    return TArray<FMETA_PerkData>();
}


