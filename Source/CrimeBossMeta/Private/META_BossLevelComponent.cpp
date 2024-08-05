#include "META_BossLevelComponent.h"
#include "ComponentInstanceDataCache.h"

UMETA_BossLevelComponent::UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

TArray<FMETA_PerkData> UMETA_BossLevelComponent::CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, TArray<FMETA_PerkData>& inCurrentPerks) {
    return TArray<FMETA_PerkData>();
}


