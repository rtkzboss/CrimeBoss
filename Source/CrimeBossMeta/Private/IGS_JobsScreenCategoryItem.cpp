#include "IGS_JobsScreenCategoryItem.h"

FIGS_JobsScreenCategoryItem::FIGS_JobsScreenCategoryItem() {
    (*this).ButtonImage = nullptr;
    (*this).ButtonName = FText::FromString(TEXT(""));
    (*this).ButtonDescription = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
}

