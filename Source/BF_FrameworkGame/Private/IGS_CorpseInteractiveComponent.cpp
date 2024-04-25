#include "IGS_CorpseInteractiveComponent.h"

UIGS_CorpseInteractiveComponent::UIGS_CorpseInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHoldable = true;
    this->NameToDisplay = FText::FromString(TEXT("Unknown name"));
    this->bOverrideMasterOutline = false;
    this->BodyBagCarryable = NULL;
}


