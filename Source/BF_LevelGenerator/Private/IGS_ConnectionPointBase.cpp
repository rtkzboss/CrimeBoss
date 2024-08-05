#include "IGS_ConnectionPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_ConnectionPointBase::AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = (USceneComponent*)Root;
}


