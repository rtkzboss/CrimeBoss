#include "IGS_WalkRope.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"

AIGS_WalkRope::AIGS_WalkRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).UseEditorTick = true;
    (*this).WalkSpeed = 1.000000000e+00f;
    (*this).WalkRope = CreateDefaultSubobject<UCableComponent>(TEXT("WalkRope"));
    (*this).WalkSpline = CreateDefaultSubobject<USplineComponent>(TEXT("WalkSpline"));
    (*this).StartTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("StartTriggerBox"));
    (*this).EndTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EndTriggerBox"));
    (*this).StartText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StartText"));
    (*this).EndText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EndText"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = (USceneComponent*)WalkRope;
    (*this).EndText->SetupAttachment((*this).EndTriggerBox);
    (*this).WalkSpline->SetupAttachment((*this).WalkRope);
    (*this).StartTriggerBox->SetupAttachment((*this).WalkRope);
    (*this).EndTriggerBox->SetupAttachment((*this).WalkRope);
    (*this).StartText->SetupAttachment((*this).StartTriggerBox);
}

void AIGS_WalkRope::SetTargetLook_Implementation(FRotator inTargetLook) {
}

void AIGS_WalkRope::SetPlayerOnRope(bool inOnRope) {
}

void AIGS_WalkRope::ResetTargetLook_Implementation() {
}

void AIGS_WalkRope::OnStartTriggerOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_WalkRope::OnEndTriggerOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_WalkRope::BlueprintEditorTick_Implementation(float DeltaTime) {
}


