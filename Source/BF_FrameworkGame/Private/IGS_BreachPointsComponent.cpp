#include "IGS_BreachPointsComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_BreachPointComponent.h"

AIGS_BreachPointsComponent::AIGS_BreachPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->NavModifier = NULL;
    this->BreachingPointsRootComponent = (USceneComponent*)RootComponent;
    this->LeftNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    this->LeftFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    this->MiddleEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackPoint"));
    this->RightNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    this->RightFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    this->LeftNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    this->LeftFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    this->MiddleExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StarckExitPoint"));
    this->RightNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    this->RightFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    this->LeftNearEntryPoint->SetupAttachment(RootComponent);
    this->LeftFarEntryPoint->SetupAttachment(RootComponent);
    this->MiddleEntryPoint->SetupAttachment(RootComponent);
    this->RightNearEntryPoint->SetupAttachment(RootComponent);
    this->RightFarEntryPoint->SetupAttachment(RootComponent);
    this->LeftNearExitPoint->SetupAttachment(RootComponent);
    this->LeftFarExitPoint->SetupAttachment(RootComponent);
    this->MiddleExitPoint->SetupAttachment(RootComponent);
    this->RightNearExitPoint->SetupAttachment(RootComponent);
    this->RightFarExitPoint->SetupAttachment(RootComponent);
}


