#include "IGS_InteractiveFollowComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_InteractiveFollowComponent::UIGS_InteractiveFollowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsFollowing = false;
    this->TimerHoldTimeFollow = 1.00f;
    this->TimerHoldTimeStop = 0.30f;
    this->followDistance = 100.00f;
    this->CanBeUseInAlarm = false;
}

void UIGS_InteractiveFollowComponent::OnRep_IsFollowing() {
}

void UIGS_InteractiveFollowComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InteractiveFollowComponent, IsFollowing);
}


