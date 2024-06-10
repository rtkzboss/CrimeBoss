#include "IGS_ReactionAnimsTableRow.h"

FIGS_ReactionAnimsTableRow::FIGS_ReactionAnimsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Reaction.Unknown");
    (*this).AnimVariations.Empty();
}

