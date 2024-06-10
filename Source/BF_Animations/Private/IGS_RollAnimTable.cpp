#include "IGS_RollAnimTable.h"

FIGS_RollAnimTable::FIGS_RollAnimTable() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Roll.Unknown");
    (*this).AnimVariations.Empty();
}

