#include "META_TutorialTextTableRow.h"

FMETA_TutorialTextTableRow::FMETA_TutorialTextTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Text = FText::FromString(TEXT(""));
}

