#include "IGS_JobsScreenCategoryItem.h"

FIGS_JobsScreenCategoryItem::FIGS_JobsScreenCategoryItem() {
    (*this).ButtonName = FText::FromString(TEXT(""));
    (*this).ButtonDescription = FText::FromString(TEXT(""));
    auto& gen3428 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0));
    gen3428.Empty();
    auto& gen3429 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0));
    gen3429.Empty();
}

