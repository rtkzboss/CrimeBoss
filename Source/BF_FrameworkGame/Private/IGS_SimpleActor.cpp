#include "IGS_SimpleActor.h"
#include "Components/SceneComponent.h"

AIGS_SimpleActor::AIGS_SimpleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


