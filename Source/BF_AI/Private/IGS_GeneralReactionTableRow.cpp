#include "IGS_GeneralReactionTableRow.h"

FIGS_GeneralReactionTableRow::FIGS_GeneralReactionTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("RestrictedAITags.GeneralReaction.Unknown");
    (*this).Data.bEnabled = false;
    (*this).Data.BehaviorTree = nullptr;
    (*this).Data.DataAsset = nullptr;
}

