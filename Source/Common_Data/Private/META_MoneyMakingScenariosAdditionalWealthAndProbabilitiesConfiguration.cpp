#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"

FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration::FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0)).Empty();
}

