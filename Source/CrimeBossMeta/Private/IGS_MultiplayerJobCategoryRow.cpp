#include "IGS_MultiplayerJobCategoryRow.h"

FIGS_MultiplayerJobCategoryRow::FIGS_MultiplayerJobCategoryRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).CategoryItemsDataTable = nullptr;
}

