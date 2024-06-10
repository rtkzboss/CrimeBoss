#include "IGS_CorpseInteractiveComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_CorpseInteractiveComponent::UIGS_CorpseInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsHoldable = true;
    (*this).TimerHoldTime = 3.000000000e+00f;
    (*this).NameToDisplay = FText::FromString(TEXT("Unknown name"));
    (*this).bOverrideMasterOutline = false;
}


