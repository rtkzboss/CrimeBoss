#include "IGS_GeneralReactionData_Base.h"

UIGS_GeneralReactionData_Base::UIGS_GeneralReactionData_Base() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = TEXT("RestrictedAITags.GeneralReaction.Unknown");
}


