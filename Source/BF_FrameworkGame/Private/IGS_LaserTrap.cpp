#include "IGS_LaserTrap.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LaserTrap::AIGS_LaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootObject = (USceneComponent*)RootComponent;
    this->BeamOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("BeamOrigin"));
    this->BeamDetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BeamDetection"));
    this->BeamDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("BeamDirection"));
    this->BeamEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamEmitter"));
    this->LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh"));
    this->StatusLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("StatusLight"));
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->LaserOnAkEvent = NULL;
    this->LaserOffAkEvent = NULL;
    this->LaserChargingAkEvent = NULL;
    this->LaserDetectionAkEvent = NULL;
    this->LaserChargingAkRtpc = NULL;
    this->LaserMeshOffMaterial = NULL;
    this->LaserMeshOnMaterial = NULL;
    this->LightIntensityCurve = NULL;
    this->LightTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightTimeline"));
    this->StartTime = 0.20f;
    this->ChargeTime = 0.30f;
    this->EnableFromStart = true;
    this->mR_bIsEnabled = false;
    this->mR_bIsBeamEnabled = false;
    this->BeamOrigin->SetupAttachment(RootComponent);
    this->BeamDetectionBox->SetupAttachment(BeamOrigin);
    this->BeamDirectionArrow->SetupAttachment(RootComponent);
    this->BeamEmitter->SetupAttachment(RootComponent);
    this->LaserMesh->SetupAttachment(RootComponent);
    this->StatusLight->SetupAttachment(RootComponent);
    this->AkAudioComponent->SetupAttachment(RootComponent);
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


