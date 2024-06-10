#include "IGS_SpecialObjectiveAnimsTableRow.h"

FIGS_SpecialObjectiveAnimsTableRow::FIGS_SpecialObjectiveAnimsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Patrol.Unknown");
    auto& gen2080 = (*this).AnimVariations;
    gen2080.Empty();
    auto& gen2081 = (*this).FemaleAnimVariations;
    gen2081.Empty();
    auto& gen2082 = (*this).FemaleWithHeelsAnimVariations;
    gen2082.Empty();
    (*this).Looped = false;
}

