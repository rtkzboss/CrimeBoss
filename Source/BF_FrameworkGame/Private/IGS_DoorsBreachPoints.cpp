#include "IGS_DoorsBreachPoints.h"
#include "IGS_BreachPointComponent.h"

AIGS_DoorsBreachPoints::AIGS_DoorsBreachPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    this->LeftFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    this->MiddleEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleEntryPoint"));
    this->RightNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    this->RightFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    this->LeftNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    this->LeftFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    this->MiddleExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleExitPoint"));
    this->RightNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    this->RightFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    this->RightFarEntryPoint->SetupAttachment(RootComponent);
    this->LeftNearExitPoint->SetupAttachment(RootComponent);
    this->LeftFarExitPoint->SetupAttachment(RootComponent);
    this->MiddleExitPoint->SetupAttachment(RootComponent);
    this->RightNearExitPoint->SetupAttachment(RootComponent);
    this->RightFarExitPoint->SetupAttachment(RootComponent);
    this->LeftNearEntryPoint->SetupAttachment(RootComponent);
    this->LeftFarEntryPoint->SetupAttachment(RootComponent);
    this->MiddleEntryPoint->SetupAttachment(RootComponent);
    this->RightNearEntryPoint->SetupAttachment(RootComponent);
}


