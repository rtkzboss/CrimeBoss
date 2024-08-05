#include "IGS_NavHintGoal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_NavHintGoal::AIGS_NavHintGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


