#include "IGS_ChallengeTableRow.h"

FIGS_ChallengeTableRow::FIGS_ChallengeTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).RequiredValue = 1;
    auto& gen1866 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredCompletedChallenges, 0));
    gen1866.Empty();
    auto& gen1867 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredCompletedChallenges, 0));
    gen1867.Empty();
}

