#include "IGS_DoorsBreachPoints.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_BreachPointComponent.h"

AIGS_DoorsBreachPoints::AIGS_DoorsBreachPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LeftNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    (*this).LeftFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    (*this).MiddleEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleEntryPoint"));
    (*this).RightNearEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    (*this).RightFarEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    (*this).LeftNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    (*this).LeftFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    (*this).MiddleExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleExitPoint"));
    (*this).RightNearExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    (*this).RightFarExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    (*this).LeftNearExitPoint->SetupAttachment((*this).RootComponent);
    (*this).LeftFarExitPoint->SetupAttachment((*this).RootComponent);
    (*this).MiddleExitPoint->SetupAttachment((*this).RootComponent);
    (*this).RightNearExitPoint->SetupAttachment((*this).RootComponent);
    (*this).RightFarExitPoint->SetupAttachment((*this).RootComponent);
    (*this).LeftNearEntryPoint->SetupAttachment((*this).RootComponent);
    (*this).LeftFarEntryPoint->SetupAttachment((*this).RootComponent);
    (*this).MiddleEntryPoint->SetupAttachment((*this).RootComponent);
    (*this).RightNearEntryPoint->SetupAttachment((*this).RootComponent);
    (*this).RightFarEntryPoint->SetupAttachment((*this).RootComponent);
}


