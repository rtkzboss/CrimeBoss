#include "IGS_Vessel_Base.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "BuoyancyComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Vessel_Base::AIGS_Vessel_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PontoonRadius = 7.500000000e+01f;
    (*this).MirrorPontoons = true;
    (*this).MaxAcceleration = 6.000000000e+02f;
    (*this).SteerForce = 2.500000000e+02f;
    (*this).MovementForceMultiplierSimpleImpulse = 1.000000000e+00f;
    (*this).SwingSpeedMultiplierSimpleImpulse = 1.199999973e-01f;
    (*this).BankingForceMultiplierSimpleImpulse = 1.000000015e-01f;
    (*this).TiltBackForceMultiplierSimpleImpulse = 5.000000075e-02f;
    (*this).InJumpGravityMultiplierSimpleImpulse = 3.000000000e+00f;
    (*this).EngineBladesPontoonIndex = 1;
    (*this).PlayerBlockBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerBlockBoxComponent"));
    (*this).LeftEngineParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffect"));
    (*this).RightEngineParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EngineParticleEffectSecond"));
    (*this).LeftBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftBoardParticleEffect"));
    (*this).CenterBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CenterBoardParticleEffect"));
    (*this).RightBoardParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightBoardParticleEffect"));
    (*this).Buoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    (*this).FPSCoeficient = 3.700000048e-02f;
    (*this).ParticleParamName = TEXT("Intensity");
    (*this).ParticleSpeedTrigger = 2.000000000e+02f;
    (*this).EngineInitialScale = 1.000000000e+00f;
    (*this).SideBoardInitialScale = 1.000000000e+00f;
    auto& gen0 = (*this).PontoonWaterStatus;
    gen0.Empty();
    gen0.AddDefaulted(2);
    (*this).PlayerBlockBoxComponent->SetupAttachment((*this).RootComponent);
    (*this).LeftEngineParticleEffect->SetupAttachment((*this).RootComponent);
    (*this).RightEngineParticleEffect->SetupAttachment((*this).RootComponent);
    (*this).LeftBoardParticleEffect->SetupAttachment((*this).RootComponent);
    (*this).CenterBoardParticleEffect->SetupAttachment((*this).RootComponent);
    (*this).RightBoardParticleEffect->SetupAttachment((*this).RootComponent);
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


