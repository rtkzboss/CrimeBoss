#include "IGS_NavLinkJump.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_NavLinkJumpComponent.h"

AIGS_NavLinkJump::AIGS_NavLinkJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NavLink = CreateDefaultSubobject<UIGS_NavLinkJumpComponent>(TEXT("Link Component"));
    (*this).NavLink->SetupAttachment((*this).RootComponent);
}


