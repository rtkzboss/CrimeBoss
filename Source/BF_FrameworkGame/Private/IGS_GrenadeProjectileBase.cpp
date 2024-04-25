#include "IGS_GrenadeProjectileBase.h"
#include "AkComponent.h"
#include "Components/PointLightComponent.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeProjectileBase::AIGS_GrenadeProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    this->GrenadeParticle = NULL;
    this->NiagaraGrenadeParticle = NULL;
    this->GrenadeIndicatorWidget = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Grenade Indicator Widget"));
    this->ExplosionSoundAkEvent = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->IndicatorWidgetTypePlayer = EIGS_WorldWidgetType::Widget_Hidden;
    this->IndicatorWidgetTypeAI = EIGS_WorldWidgetType::Widget_Hidden;
    this->IndicatorAppearTime = 0.33f;
    this->LightFlashTime = 0.20f;
    this->ImpactDistance = 150.00f;
    this->bMakeNoiseAndEvent = true;
    this->mR_bIsExploded = false;
    this->ExplosionLight->SetupAttachment(ThrowableMesh);
    this->GrenadeIndicatorWidget->SetupAttachment(ThrowableMesh);
    this->AkComponent->SetupAttachment(ThrowableMesh);
}

void AIGS_GrenadeProjectileBase::SetIndicatorIconWidget() const {
}

void AIGS_GrenadeProjectileBase::PlayEffect_Implementation() {
}


void AIGS_GrenadeProjectileBase::OnExplosionSphereTrace_Implementation(AActor* inActor) const {
}

void AIGS_GrenadeProjectileBase::OnExplosion_Implementation() {
}

void AIGS_GrenadeProjectileBase::Multicast_ExplodeEffect_Implementation() {
}

bool AIGS_GrenadeProjectileBase::HasExploded() const {
    return false;
}

float AIGS_GrenadeProjectileBase::GetOuterEffectRadius() const {
    return 0.0f;
}

void AIGS_GrenadeProjectileBase::Explode() {
}

void AIGS_GrenadeProjectileBase::AffectPlayer_Implementation(const AIGS_GameCharacterFramework* inPlayer) const {
}

void AIGS_GrenadeProjectileBase::AffectNPC_Implementation(const AIGS_GameCharacterFramework* inNPC) const {
}

void AIGS_GrenadeProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GrenadeProjectileBase, mR_bIsExploded);
}


