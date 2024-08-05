#include "IGS_BreachableWall.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_BreachableWall::AIGS_BreachableWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WallRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WallRootComponent"));
    (*this).FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    (*this).BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    (*this).RootComponent = (USceneComponent*)WallRootComponent;
    (*this).FrontBreachingPoints->SetupAttachment((*this).WallRootComponent);
    (*this).BackBreachingPoints->SetupAttachment((*this).WallRootComponent);
}


