#include "IGS_InteractiveFollowComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_InteractiveFollowComponent::UIGS_InteractiveFollowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TimerHoldTimeFollow = 1.000000000e+00f;
    (*this).TimerHoldTimeStop = 3.000000119e-01f;
    (*this).followDistance = 1.000000000e+02f;
    (*this).CanBeUseInAlarm = true;
}

void UIGS_InteractiveFollowComponent::OnRep_IsFollowing() {
}

void UIGS_InteractiveFollowComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InteractiveFollowComponent, IsFollowing);
}


