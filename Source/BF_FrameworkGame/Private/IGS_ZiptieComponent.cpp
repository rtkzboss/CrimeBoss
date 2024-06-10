#include "IGS_ZiptieComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_ZiptieComponent::UIGS_ZiptieComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bBlockInputUntilAbilityEnd = false;
    (*this).bMoveToExactPositionAndRotation = false;
    (*this).MoveInterpSpeed = 1.000000000e+01f;
    (*this).bSetFlyingWhenLerping = false;
    (*this).bRotateOnly = true;
    (*this).bIsHoldable = true;
    (*this).TimerHoldTime = 1.500000000e+00f;
    (*this).NameToDisplay = FText::FromString(TEXT("Unknown name"));
    (*this).InteractionDistance = 1.400000000e+02f;
}

void UIGS_ZiptieComponent::OnRep_IsZiptied() const {
}

void UIGS_ZiptieComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ZiptieComponent, IsZiptied);
}


