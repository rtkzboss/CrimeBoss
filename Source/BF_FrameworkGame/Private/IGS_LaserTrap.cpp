#include "IGS_LaserTrap.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LaserTrap::AIGS_LaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootObject = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).BeamOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("BeamOrigin"));
    (*this).BeamDetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BeamDetection"));
    (*this).BeamDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("BeamDirection"));
    (*this).BeamEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamEmitter"));
    (*this).LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh"));
    (*this).StatusLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("StatusLight"));
    (*this).AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).LightTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightTimeline"));
    (*this).StartTime = 2.000000030e-01f;
    (*this).ChargeTime = 3.000000119e-01f;
    (*this).EnableFromStart = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.TickInterval = 5.000000000e-01f;
    (*this).RootComponent = (USceneComponent*)RootObject;
    (*this).BeamDetectionBox->SetupAttachment((*this).BeamOrigin);
    (*this).BeamDirectionArrow->SetupAttachment((*this).RootObject);
    (*this).BeamEmitter->SetupAttachment((*this).RootObject);
    (*this).LaserMesh->SetupAttachment((*this).RootObject);
    (*this).StatusLight->SetupAttachment((*this).RootObject);
    (*this).AkAudioComponent->SetupAttachment((*this).RootObject);
    (*this).BeamOrigin->SetupAttachment((*this).RootObject);
}

void AIGS_LaserTrap::SetEnabled(bool inState, bool inIgnoreChargeTime) {
}

void AIGS_LaserTrap::SetBeamEnabledDelayed(bool inState) {
}

void AIGS_LaserTrap::OnRep_RecalculateBeam() const {
}

void AIGS_LaserTrap::OnRep_OnSetEnabled() const {
}

void AIGS_LaserTrap::OnRep_OnSetBeamEnabled() {
}

void AIGS_LaserTrap::OnPlayerDetected_Implementation() {
}

void AIGS_LaserTrap::OnLightTimelineUpdate(float InValue) {
}

void AIGS_LaserTrap::OnBeamEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIGS_LaserTrap::OnBeamBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_LaserTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LaserTrap, mR_bIsEnabled);
    DOREPLIFETIME(AIGS_LaserTrap, mR_bIsBeamEnabled);
    DOREPLIFETIME(AIGS_LaserTrap, mR_EndBeamPoint);
}


