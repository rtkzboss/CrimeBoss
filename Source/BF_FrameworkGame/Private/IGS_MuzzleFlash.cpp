#include "IGS_MuzzleFlash.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_MuzzleFlash::AIGS_MuzzleFlash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MuzzleFlashRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    (*this).ParticleNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Particle"));
    (*this).ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Particle"));
    (*this).ParticleNiagaraTortillaComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Tortilla Particle"));
    (*this).ParticleTortillaComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Tortilla Particle"));
    (*this).LightComponent3PV = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light 3PV"));
    (*this).LightComponentFPV = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light FPV"));
    (*this).StartAfterProjectileCount = 6;
    (*this).MuzzleLightStopTime = 3.500000015e-02f;
    (*this).MuzzleStopTime = 2.500000000e-01f;
    (*this).FadeInSpeed = 1.000000000e+00f;
    (*this).FadeOutSpeed = 1.000000000e+00f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).RootComponent = (USceneComponent*)MuzzleFlashRootComponent;
    (*this).ParticleNiagaraComponent->SetupAttachment((*this).MuzzleFlashRootComponent);
    (*this).ParticleComponent->SetupAttachment((*this).MuzzleFlashRootComponent);
    (*this).ParticleNiagaraTortillaComponent->SetupAttachment((*this).MuzzleFlashRootComponent);
    (*this).ParticleTortillaComponent->SetupAttachment((*this).MuzzleFlashRootComponent);
    (*this).LightComponent3PV->SetupAttachment((*this).MuzzleFlashRootComponent);
    (*this).LightComponentFPV->SetupAttachment((*this).MuzzleFlashRootComponent);
}

void AIGS_MuzzleFlash::StopMuzzleFlash_Implementation() {
}

void AIGS_MuzzleFlash::StartMuzzleFlash_Implementation() {
}


