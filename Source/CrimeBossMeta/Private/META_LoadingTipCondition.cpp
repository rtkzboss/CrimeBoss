#include "META_LoadingTipCondition.h"

FMETA_LoadingTipCondition::FMETA_LoadingTipCondition() {
    auto& gen3454 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0));
    gen3454.Empty();
    auto& gen3455 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0));
    gen3455.Empty();
    auto& gen3456 = (*this).Conditions;
    gen3456.Empty();
    (*this).Operator = EMETA_ConditionExprOperator::And;
}

