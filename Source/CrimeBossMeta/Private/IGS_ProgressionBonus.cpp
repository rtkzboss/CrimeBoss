#include "IGS_ProgressionBonus.h"

FIGS_ProgressionBonus::FIGS_ProgressionBonus() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BonusTag, 0)) = NAME_None;
    (*this).Value = 0;
}

