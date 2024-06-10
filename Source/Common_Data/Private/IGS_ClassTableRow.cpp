#include "IGS_ClassTableRow.h"
#include "GameplayTagContainer.h"

FIGS_ClassTableRow::FIGS_ClassTableRow() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ClassPerk, 0)) = NAME_None;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.Description = FText::FromString(TEXT("None"));
}

