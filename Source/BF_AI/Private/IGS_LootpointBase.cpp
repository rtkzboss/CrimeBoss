#include "IGS_LootpointBase.h"
#include "Components/SceneComponent.h"

AIGS_LootpointBase::AIGS_LootpointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
}


