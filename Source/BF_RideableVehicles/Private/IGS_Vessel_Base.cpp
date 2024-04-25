#include "IGS_Vessel_Base.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "BuoyancyComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Vessel_Base::AIGS_Vessel_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PontoonRadius = 75.00f;
    this->MirrorPontoons = true;
    this->MaxAcceleration = 600.00f;
    this->SteerForce = 250.00f;
    this->SwingForceOverSpeed = NULL;
    this->BuoyancyCoefficientOverSpeed = NULL;
    this->MovementForceMultiplierSimpleImpulse = 1.00f;
    this->SwingSpeedMultiplierSimpleImpulse = 0.12f;
    this->BankingForceMultiplierSimpleImpulse = 0.10f;
    this->TiltBackForceMultiplierSimpleImpulse = 0.05f;
    this->InJumpGravityMultiplierSimpleImpulse = 3.00f;
    this->FrontPartPontoonIndex = 0;
    this->EngineBladesPontoonIndex = 1;
    this->PlayerBlockBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerBlockBoxComponent"));
    this->LeftEngineParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffect"));
    this->RightEngineParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffectSecond"));
    this->LeftBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftBoardParticleEffect"));
    this->CenterBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CenterBoardParticleEffect"));
    this->RightBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightBoardParticleEffect"));
    this->Buoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    this->Steer = 0.00f;
    this->Throttle = 0.00f;
    this->FPSCoeficient = 0.04f;
    this->CurrentForce = 0.00f;
    this->ParticleParamName = TEXT("Intensity");
    this->ParticleSpeedTrigger = 200.00f;
    this->EngineInitialScale = 1.00f;
    this->SideBoardInitialScale = 1.00f;
    this->PontoonWaterStatus.AddDefaulted(2);
    this->PlayerBlockBoxComponent->SetupAttachment(RootComponent);
    this->LeftEngineParticleEffect->SetupAttachment(RootComponent);
    this->RightEngineParticleEffect->SetupAttachment(RootComponent);
    this->LeftBoardParticleEffect->SetupAttachment(RootComponent);
    this->CenterBoardParticleEffect->SetupAttachment(RootComponent);
    this->RightBoardParticleEffect->SetupAttachment(RootComponent);
}

void AIGS_Vessel_Base::SyncControls_SERVER_Implementation(float inSteering, float inThrottle) {
}

void AIGS_Vessel_Base::SyncControls() {
}

void AIGS_Vessel_Base::SetExitTransform(TArray<FTransform> inNewPositions) {
}

void AIGS_Vessel_Base::PreventFlipUp() const {
}

void AIGS_Vessel_Base::OnEntryTriggerBeginOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_Vessel_Base::MoveRight(float inAxis) {
}

void AIGS_Vessel_Base::MoveForward(float inAxis) {
}

void AIGS_Vessel_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Vessel_Base, Steer);
    DOREPLIFETIME(AIGS_Vessel_Base, Throttle);
    DOREPLIFETIME(AIGS_Vessel_Base, CurrentForce);
    DOREPLIFETIME(AIGS_Vessel_Base, m_PlayerExitPositions);
}


