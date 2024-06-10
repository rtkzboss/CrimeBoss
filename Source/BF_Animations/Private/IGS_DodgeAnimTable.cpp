#include "IGS_DodgeAnimTable.h"

FIGS_DodgeAnimTable::FIGS_DodgeAnimTable() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Dodge.Unknown");
    auto& gen2013 = (*this).AnimVariations;
    gen2013.Empty();
}

