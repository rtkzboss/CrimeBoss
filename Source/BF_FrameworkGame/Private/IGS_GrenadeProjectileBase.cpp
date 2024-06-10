#include "IGS_GrenadeProjectileBase.h"
#include "AkComponent.h"
#include "AkSwitchValue.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/PointLightComponent.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeProjectileBase::AIGS_GrenadeProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    (*this).GrenadeIndicatorWidget = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Grenade Indicator Widget"));
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen602(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Indoors.SwitchGrp_EnviroSpace-Switch_Indoors"));
    (*this).IndoorsAkSwitch = gen602.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen603(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Outdoors.SwitchGrp_EnviroSpace-Switch_Outdoors"));
    (*this).OutdoorsAkSwitch = gen603.Object;
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).IndicatorAppearTime = 3.330000043e-01f;
    (*this).LightFlashTime = 2.000000030e-01f;
    (*this).ImpactDistance = 1.500000000e+02f;
    (*this).bMakeNoiseAndEvent = true;
    (*this).GrenadeIndicatorWidget->SetupAttachment((*this).ThrowableMesh);
    (*this).AkComponent->SetupAttachment((*this).ThrowableMesh);
    (*this).ExplosionLight->SetupAttachment((*this).ThrowableMesh);
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


