#include "IGS_CarAnimsTableRow.h"

FIGS_CarAnimsTableRow::FIGS_CarAnimsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Car.Type.Sedan");
}

