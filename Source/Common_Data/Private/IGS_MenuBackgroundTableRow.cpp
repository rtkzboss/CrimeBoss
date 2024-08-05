#include "IGS_MenuBackgroundTableRow.h"

FIGS_MenuBackgroundTableRow::FIGS_MenuBackgroundTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Priority = 0;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Condition = nullptr;
}

