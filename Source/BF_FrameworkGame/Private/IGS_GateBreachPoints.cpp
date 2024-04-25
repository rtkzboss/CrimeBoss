#include "IGS_GateBreachPoints.h"
#include "IGS_BreachPointComponent.h"

AIGS_GateBreachPoints::AIGS_GateBreachPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StackEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackEntryPoint"));
    this->BreachEntryPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("BreachEntryPoint"));
    this->StackExitPoint = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackExitPoint"));
    this->StackEntryPoint->SetupAttachment(RootComponent);
    this->BreachEntryPoint->SetupAttachment(RootComponent);
    this->StackExitPoint->SetupAttachment(RootComponent);
}


