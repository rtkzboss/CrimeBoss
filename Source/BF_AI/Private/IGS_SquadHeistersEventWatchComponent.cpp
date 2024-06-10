#include "IGS_SquadHeistersEventWatchComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_SquadHeistersEventWatchComponent::UIGS_SquadHeistersEventWatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


