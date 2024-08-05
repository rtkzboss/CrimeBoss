#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "EJobUITileType.h"

FIGS_MultiplayerJobCategoryItemRow::FIGS_MultiplayerJobCategoryItemRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).UIData.Image = nullptr;
    (*this).UIData.Name = FText::FromString(TEXT(""));
    (*this).UIData.Description = FText::FromString(TEXT(""));
    (*this).UIData.TileDisplayType = EJobUITileType::Big;
}

