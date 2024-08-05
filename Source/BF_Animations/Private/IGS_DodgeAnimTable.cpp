#include "IGS_DodgeAnimTable.h"

FIGS_DodgeAnimTable::FIGS_DodgeAnimTable() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Dodge.Unknown");
    (*this).AnimVariations.Empty();
}

