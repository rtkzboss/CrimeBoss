#include "IGS_RichPresenceMissionNameTableRow.h"

FIGS_RichPresenceMissionNameTableRow::FIGS_RichPresenceMissionNameTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
}

