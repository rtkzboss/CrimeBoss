#include "IGS_SquadHeistersComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_SquadHeistersComponent::UIGS_SquadHeistersComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


