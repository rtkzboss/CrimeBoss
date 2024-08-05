#include "IGS_AIThreatComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIThreatComponent::UIGS_AIThreatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DmgRequiredToMaxThreat = 2.000000030e-01f;
    (*this).ThreathFromFriendsDeath = 1.000000000e+00f;
    (*this).ShotNearThreatAddonThreat = 5.000000000e-01f;
    (*this).ShotNearDistance = 2.000000000e+02f;
    (*this).FullDropTime = 3.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 5.000000000e-01f;
}


