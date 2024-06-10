#include "IGS_RollAnimTable.h"

FIGS_RollAnimTable::FIGS_RollAnimTable() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Roll.Unknown");
    auto& gen2014 = (*this).AnimVariations;
    gen2014.Empty();
}

