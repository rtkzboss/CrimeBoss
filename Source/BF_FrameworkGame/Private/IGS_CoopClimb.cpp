#include "IGS_CoopClimb.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_CoopClimb::AIGS_CoopClimb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CoopClimbInteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("CoopClimbInteractiveComponent"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->CoopClimbInteractiveComponent->SetupAttachment(RootComponent);
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AIGS_CoopClimb::OnUsed(AIGS_GameCharacterFramework* inInstigator) {
}


