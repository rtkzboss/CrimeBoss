#include "HoudiniInstancedActorComponent.h"
#include "ComponentInstanceDataCache.h"

UHoudiniInstancedActorComponent::UHoudiniInstancedActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Static;
    (*this).bCanEverAffectNavigation = true;
}


