#include "IGS_CoopClimb.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_CoopClimb::AIGS_CoopClimb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CoopClimbInteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("CoopClimbInteractiveComponent"));
    (*this).CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).CoopClimbInteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).CapsuleComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_CoopClimb::OnUsed(AIGS_GameCharacterFramework* inInstigator) {
}


