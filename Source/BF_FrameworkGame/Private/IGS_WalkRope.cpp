#include "IGS_WalkRope.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"

AIGS_WalkRope::AIGS_WalkRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCableComponent>(TEXT("WalkRope"));
    this->UseEditorTick = true;
    this->WalkSpeed = 1.00f;
    this->DeltaLookDown = 0.00f;
    this->WalkRope = (UCableComponent*)RootComponent;
    this->WalkSpline = CreateDefaultSubobject<USplineComponent>(TEXT("WalkSpline"));
    this->StartTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("StartTriggerBox"));
    this->EndTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EndTriggerBox"));
    this->StartText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StartText"));
    this->EndText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EndText"));
    this->Player = NULL;
    this->OnRopeWalking = false;
    this->WalkSpline->SetupAttachment(RootComponent);
    this->StartTriggerBox->SetupAttachment(RootComponent);
    this->EndTriggerBox->SetupAttachment(RootComponent);
    this->StartText->SetupAttachment(StartTriggerBox);
    this->EndText->SetupAttachment(EndTriggerBox);
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


