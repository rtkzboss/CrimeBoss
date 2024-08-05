#include "IGS_GrenadeLauncherProjectileBase.h"
#include "AkComponent.h"
#include "AkSwitchValue.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/PointLightComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeLauncherProjectileBase::AIGS_GrenadeLauncherProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Indoors.SwitchGrp_EnviroSpace-Switch_Indoors"));
    (*this).IndoorsAkSwitch = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen1(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Outdoors.SwitchGrp_EnviroSpace-Switch_Outdoors"));
    (*this).OutdoorsAkSwitch = gen1.Object;
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).LightFlashTime = 2.000000030e-01f;
    (*this).ImpactDistance = 1.500000000e+02f;
    (*this).bMakeNoiseAndEvent = true;
    (*this).AkComponent->SetupAttachment((*this).ThrowableMesh);
    (*this).ExplosionLight->SetupAttachment((*this).ThrowableMesh);
}

void AIGS_GrenadeLauncherProjectileBase::PlayEffect_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosionSphereTrace_Implementation(AActor* inActor) const {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosion_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::Multicast_ExplodeEffect_Implementation() {
}

bool AIGS_GrenadeLauncherProjectileBase::HasExploded() const {
    return false;
}

float AIGS_GrenadeLauncherProjectileBase::GetOuterEffectRadius() const {
    return 0.0f;
}

void AIGS_GrenadeLauncherProjectileBase::Explode() {
}

void AIGS_GrenadeLauncherProjectileBase::AffectPlayer_Implementation(const AIGS_GameCharacterFramework* inPlayer) const {
}

void AIGS_GrenadeLauncherProjectileBase::AffectNPC_Implementation(const AIGS_GameCharacterFramework* inNPC) const {
}

void AIGS_GrenadeLauncherProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GrenadeLauncherProjectileBase, mR_bIsExploded);
}


