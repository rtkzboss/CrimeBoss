#include "IGS_NavLinkBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_NavLinkBase::AIGS_NavLinkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    this->helpersBox->SetupAttachment(RootComponent);
}

void AIGS_NavLinkBase::OnNavlinkTransitionStarted(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight) {
}

void AIGS_NavLinkBase::OnNavlinkComponentReached(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight) {
}

void AIGS_NavLinkBase::OnNavlinkComponentLeft(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn) {
}


