#include "IGS_SpecialObjectiveAnimsTableRow.h"

FIGS_SpecialObjectiveAnimsTableRow::FIGS_SpecialObjectiveAnimsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Patrol.Unknown");
    (*this).AnimVariations.Empty();
    (*this).FemaleAnimVariations.Empty();
    (*this).FemaleWithHeelsAnimVariations.Empty();
    (*this).Looped = false;
}

