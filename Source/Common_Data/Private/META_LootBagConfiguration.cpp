#include "META_LootBagConfiguration.h"

FMETA_LootBagConfiguration::FMETA_LootBagConfiguration() {
    auto& gen1811 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0));
    gen1811.Empty();
    auto& gen1812 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0));
    gen1812.Empty();
    (*this).TotalLootbagCount = 0;
}

