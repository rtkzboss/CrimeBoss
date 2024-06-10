#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"

FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration::FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() {
    auto& gen1813 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0));
    gen1813.Empty();
    auto& gen1814 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0));
    gen1814.Empty();
}

