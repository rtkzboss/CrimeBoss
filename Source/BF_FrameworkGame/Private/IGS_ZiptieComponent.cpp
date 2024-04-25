#include "IGS_ZiptieComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_ZiptieComponent::UIGS_ZiptieComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHoldable = true;
    this->NameToDisplay = FText::FromString(TEXT("Unknown name"));
    this->bBlockInputUntilAbilityEnd = false;
    this->bMoveToExactPositionAndRotation = false;
    this->bSetFlyingWhenLerping = false;
    this->bRotateOnly = true;
    this->IsZiptied = false;
    this->CurrentInstigator = NULL;
}

void UIGS_ZiptieComponent::OnRep_IsZiptied() const {
}

void UIGS_ZiptieComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ZiptieComponent, IsZiptied);
}


