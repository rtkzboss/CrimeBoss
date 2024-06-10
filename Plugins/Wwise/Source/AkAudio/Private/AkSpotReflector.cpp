#include "AkSpotReflector.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AAkSpotReflector::AAkSpotReflector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DistanceScalingFactor = 2.000000000e+00f;
    (*this).Level = 1.000000000e+00f;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpotReclectorRootComponent"));
}


