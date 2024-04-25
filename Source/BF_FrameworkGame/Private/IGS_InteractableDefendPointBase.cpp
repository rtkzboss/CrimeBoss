#include "IGS_InteractableDefendPointBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_InteractableDefendPointBase::AIGS_InteractableDefendPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->DefendInteraction = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Defend Interaction"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->LeaveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Defend Trigger"));
    this->DefendTime = 10.00f;
    this->bIsTimed = true;
    this->ResetCountdown = 10.00f;
    this->DelayAfterAllPlayersOut = 10.00f;
    this->mR_bPinged = true;
    this->DefendInteraction->SetupAttachment(RootComponent);
    this->LeaveTrigger->SetupAttachment(RootComponent);
}

void AIGS_InteractableDefendPointBase::SetPinged(bool inPinged) {
}

void AIGS_InteractableDefendPointBase::OnRep_Pinged() {
}

void AIGS_InteractableDefendPointBase::OnPlayerCountChanged_Implementation(int32 inCount) {
}



void AIGS_InteractableDefendPointBase::OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}



void AIGS_InteractableDefendPointBase::OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

float AIGS_InteractableDefendPointBase::GetDefendTimeRemaining() {
    return 0.0f;
}

float AIGS_InteractableDefendPointBase::GetDefendTimeElapsed() {
    return 0.0f;
}

void AIGS_InteractableDefendPointBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_InteractableDefendPointBase, mR_bPinged);
}


