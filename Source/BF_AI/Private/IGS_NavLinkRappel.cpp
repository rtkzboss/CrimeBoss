#include "IGS_NavLinkRappel.h"
#include "IGS_NavLinkRappelComponent.h"

AIGS_NavLinkRappel::AIGS_NavLinkRappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLink = CreateDefaultSubobject<UIGS_NavLinkRappelComponent>(TEXT("Link Component"));
    this->EndTransitionDistance = 35.00f;
    this->DisableRopeUpdateDelay = 3.00f;
    this->FallingSpeed = 250.00f;
    this->RopeClass = NULL;
    this->RopeActor = NULL;
    this->NavLink->SetupAttachment(RootComponent);
}


