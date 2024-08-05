#include "IGS_AIHeliSpawnComponent.h"
#include "ComponentInstanceDataCache.h"
#include "EIGS_CarType.h"
#include "EIGS_TeamSideEnum.h"

UIGS_AIHeliSpawnComponent::UIGS_AIHeliSpawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).FallingSpeed = 4.000000000e+02f;
    (*this).GetOutAnimationDistance = 8.800000000e+01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


