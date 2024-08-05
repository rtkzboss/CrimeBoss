#include "BTDecorator_IsPreviousGeneralReaction.h"

UBTDecorator_IsPreviousGeneralReaction::UBTDecorator_IsPreviousGeneralReaction() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PreviousGlobalReactionTag, 0)) = TEXT("RestrictedAITags.GeneralReaction.Unknown");
    (*this).MaxTimeSince = -1.000000000e+00f;
    (*this).NodeName = TEXT("Is Previous General Reaction <Tag>?");
}


