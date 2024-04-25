#include "IGS_NavLinkWalkThrough.h"
#include "IGS_NavLinkWalkThroughComponent.h"

AIGS_NavLinkWalkThrough::AIGS_NavLinkWalkThrough(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLink = CreateDefaultSubobject<UIGS_NavLinkWalkThroughComponent>(TEXT("Link Component"));
    this->NavLink->SetupAttachment(RootComponent);
}


