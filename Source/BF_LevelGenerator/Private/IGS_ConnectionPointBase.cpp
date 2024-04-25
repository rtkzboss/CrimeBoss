#include "IGS_ConnectionPointBase.h"
#include "Components/SceneComponent.h"

AIGS_ConnectionPointBase::AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
}


