#include "IGS_SpecificSpecialLoot.h"

FIGS_SpecificSpecialLoot::FIGS_SpecificSpecialLoot() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*this).Value = 0;
}

