#include "IGS_CoverPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointBase::AIGS_CoverPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).Radius = 3.500000000e+01f;
    (*this).ShowSideSteps = true;
    (*this).ShowStanding = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


