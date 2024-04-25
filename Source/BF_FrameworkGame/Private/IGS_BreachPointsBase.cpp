#include "IGS_BreachPointsBase.h"
#include "Components/SceneComponent.h"

AIGS_BreachPointsBase::AIGS_BreachPointsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->NavModifier = NULL;
    this->BreachingPointsRootComponent = (USceneComponent*)RootComponent;
}


