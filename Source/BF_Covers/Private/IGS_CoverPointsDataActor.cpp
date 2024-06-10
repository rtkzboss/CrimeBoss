#include "IGS_CoverPointsDataActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointsDataActor::AIGS_CoverPointsDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


