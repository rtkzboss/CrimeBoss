#include "IGS_VehicleExitPoint.h"
#include "Components/SceneComponent.h"

AIGS_VehicleExitPoint::AIGS_VehicleExitPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->VehicleGroups = 0;
    this->PossiblePath = NULL;
}


