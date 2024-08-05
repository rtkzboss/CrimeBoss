#include "IGS_VehicleExitPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_VehicleExitPoint::AIGS_VehicleExitPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


