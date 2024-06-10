#include "IGS_ScenarioRewardMultiplier.h"

FIGS_ScenarioRewardMultiplier::FIGS_ScenarioRewardMultiplier() {
    (*this).ItemName = TEXT("");
    auto& gen2094 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0));
    gen2094.Empty();
    auto& gen2095 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0));
    gen2095.Empty();
    (*this).RewardMultiplier = 1.000000000e+00f;
}

