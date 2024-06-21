#include "IGS_NavLink.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_NavLinkComponent.h"

AIGS_NavLink::AIGS_NavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LinkComponent = CreateDefaultSubobject<UIGS_NavLinkComponent>(TEXT("Link Component"));
    (*this).NavLink = (UIGS_NavLinkComponentFramework*)LinkComponent;
    (*this).LinkComponent->SetupAttachment((*this).RootComponent);
    (*this).NavLink->SetupAttachment((*this).RootComponent);
}


