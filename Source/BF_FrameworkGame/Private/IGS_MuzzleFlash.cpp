#include "IGS_MuzzleFlash.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_MuzzleFlash::AIGS_MuzzleFlash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->MuzzleFlashRootComponent = (USceneComponent*)RootComponent;
    this->ParticleNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Particle"));
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Particle"));
    this->ParticleNiagaraTortillaComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Tortilla Particle"));
    this->ParticleTortillaComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Tortilla Particle"));
    this->LightComponent3PV = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light 3PV"));
    this->LightComponentFPV = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light FPV"));
    this->StartAfterProjectileCount = 6;
    this->MuzzleLightStopTime = 0.04f;
    this->MuzzleStopTime = 0.25f;
    this->FadeInSpeed = 1.00f;
    this->FadeOutSpeed = 1.00f;
    this->bIsTortilla = false;
    this->CurrentLight = NULL;
    this->ParticleNiagaraComponent->SetupAttachment(RootComponent);
    this->ParticleComponent->SetupAttachment(RootComponent);
    this->ParticleNiagaraTortillaComponent->SetupAttachment(RootComponent);
    this->ParticleTortillaComponent->SetupAttachment(RootComponent);
    this->LightComponent3PV->SetupAttachment(RootComponent);
    this->LightComponentFPV->SetupAttachment(RootComponent);
}

void AIGS_MuzzleFlash::StopMuzzleFlash_Implementation() {
}

void AIGS_MuzzleFlash::StartMuzzleFlash_Implementation() {
}


