#include "IGS_LootpointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_LootpointBase::AIGS_LootpointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = (USceneComponent*)Root;
}


