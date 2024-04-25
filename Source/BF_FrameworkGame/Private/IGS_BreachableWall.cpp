#include "IGS_BreachableWall.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

AIGS_BreachableWall::AIGS_BreachableWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WallRootComponent"));
    this->WallRootComponent = (USceneComponent*)RootComponent;
    this->FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    this->BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    this->OwningRoom = NULL;
    this->bIsBreached = false;
    this->NavigationBlock = NULL;
    this->FrontBreachingPoints->SetupAttachment(RootComponent);
    this->BackBreachingPoints->SetupAttachment(RootComponent);
}


