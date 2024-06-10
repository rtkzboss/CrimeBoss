#include "IGS_SubControllerVehicle.h"
#include "ComponentInstanceDataCache.h"

UIGS_SubControllerVehicle::UIGS_SubControllerVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


