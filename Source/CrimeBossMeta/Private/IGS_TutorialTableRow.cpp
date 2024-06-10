#include "IGS_TutorialTableRow.h"

FIGS_TutorialTableRow::FIGS_TutorialTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).SlowDownGame = false;
    auto& gen3471 = (*this).Pages;
    gen3471.Empty();
}

