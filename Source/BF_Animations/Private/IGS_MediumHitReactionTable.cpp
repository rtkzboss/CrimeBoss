#include "IGS_MediumHitReactionTable.h"

FIGS_MediumHitReactionTable::FIGS_MediumHitReactionTable() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.HitReaction.Unknown");
    (*this).AnimVariations.Empty();
}

