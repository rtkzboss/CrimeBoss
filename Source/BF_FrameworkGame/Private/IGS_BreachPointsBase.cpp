#include "IGS_BreachPointsBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_BreachPointsBase::AIGS_BreachPointsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BreachingPointsRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).RootComponent = (USceneComponent*)BreachingPointsRootComponent;
}


