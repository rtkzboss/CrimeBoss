#include "IGS_NavHintGoal.h"
#include "Components/SceneComponent.h"

AIGS_NavHintGoal::AIGS_NavHintGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Querier = NULL;
    this->GoalActor = NULL;
}


