#include "IGS_TutorialTableRow.h"

FIGS_TutorialTableRow::FIGS_TutorialTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).SlowDownGame = false;
    (*this).Pages.Empty();
}

