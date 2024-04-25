#include "IGS_NavLink.h"
#include "IGS_NavLinkComponent.h"

AIGS_NavLink::AIGS_NavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLink = CreateDefaultSubobject<UIGS_NavLinkComponent>(TEXT("Link Component"));
    this->LinkComponent = (UIGS_NavLinkComponentBase*)NavLink;
    this->NavLink->SetupAttachment(RootComponent);
    this->LinkComponent->SetupAttachment(RootComponent);
}


