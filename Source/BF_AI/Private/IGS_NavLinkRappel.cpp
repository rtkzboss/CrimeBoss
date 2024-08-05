#include "IGS_NavLinkRappel.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_NavLinkRappelComponent.h"

AIGS_NavLinkRappel::AIGS_NavLinkRappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).EndTransitionDistance = 3.500000000e+01f;
    (*this).DisableRopeUpdateDelay = 3.000000000e+00f;
    (*this).FallingSpeed = 2.500000000e+02f;
    (*this).RopeSpawnOffset.Z = 1.250000000e+02f;
    (*this).NavLink = CreateDefaultSubobject<UIGS_NavLinkRappelComponent>(TEXT("Link Component"));
    (*this).NavLink->SetupAttachment((*this).RootComponent);
}


