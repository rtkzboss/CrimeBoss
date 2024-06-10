#include "IGS_ScenarioRewardMultiplier.h"

FIGS_ScenarioRewardMultiplier::FIGS_ScenarioRewardMultiplier() {
    (*this).ItemName = TEXT("");
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
    (*this).RewardMultiplier = 1.000000000e+00f;
}

