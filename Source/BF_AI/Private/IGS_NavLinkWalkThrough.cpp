#include "IGS_NavLinkWalkThrough.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_NavLinkWalkThroughComponent.h"

AIGS_NavLinkWalkThrough::AIGS_NavLinkWalkThrough(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NavLink = CreateDefaultSubobject<UIGS_NavLinkWalkThroughComponent>(TEXT("Link Component"));
    (*this).NavLink->SetupAttachment((*this).RootComponent);
}


