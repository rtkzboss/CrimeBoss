#include "IGS_BreachPointsComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_BreachPointComponent.h"

AIGS_BreachPointsComponent::AIGS_BreachPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BreachingPointsRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).LeftNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    (*this).LeftFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    (*this).MiddleEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackPoint"));
    (*this).RightNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    (*this).RightFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    (*this).LeftNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    (*this).LeftFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    (*this).MiddleExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StarckExitPoint"));
    (*this).RightNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    (*this).RightFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    (*this).RootComponent = (USceneComponent*)BreachingPointsRootComponent;
    (*this).MiddleEntryPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).RightNearEntryPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).RightFarEntryPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).LeftNearExitPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).LeftFarExitPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).MiddleExitPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).RightNearExitPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).RightFarExitPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).LeftNearEntryPoint->SetupAttachment((*this).BreachingPointsRootComponent);
    (*this).LeftFarEntryPoint->SetupAttachment((*this).BreachingPointsRootComponent);
}


