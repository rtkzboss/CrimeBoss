#include "META_LootBagConfiguration.h"

FMETA_LootBagConfiguration::FMETA_LootBagConfiguration() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0)).Empty();
    (*this).TotalLootbagCount = 0;
}

