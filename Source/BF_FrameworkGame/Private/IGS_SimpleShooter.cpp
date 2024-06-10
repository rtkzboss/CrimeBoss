#include "IGS_SimpleShooter.h"
#include "AkAudioEvent.h"
#include "AkRtpc.h"
#include "AkSwitchValue.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_SimpleShooter::UIGS_SimpleShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShotAILoudness = 1.000000000e+00f;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopStart.AKE_WeaponFire_LoopStart"));
    (*this).ShootStartAudioEvent = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen1(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopBreak.AKE_WeaponFire_LoopBreak"));
    (*this).ShootStopAudioEvent = gen1.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen2(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Single.AKE_WeaponFire_Single"));
    (*this).SingleShotAudioEvent = gen2.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen3(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponState/SwitchGrp_WeaponState-Switch_Normal.SwitchGrp_WeaponState-Switch_Normal"));
    (*this).NormalStateAkSwitch = gen3.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen4(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponFireRate.RTPC_WeaponFireRate"));
    (*this).FireRateAkRtpc = gen4.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen5(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponRoundsLeft.RTPC_WeaponRoundsLeft"));
    (*this).RoundsLeftAkRtpc = gen5.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen6(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponAimDownSight.RTPC_WeaponAimDownSight"));
    (*this).AdsAkRtpc = gen6.Object;
    (*this).TracerEffectChance = 1.000000000e+02f;
    (*this).TrailEffectChance = 1.000000000e+01f;
}

void UIGS_SimpleShooter::StopAttack(const bool inForced) {
}

void UIGS_SimpleShooter::SetWeaponObject(UIGS_WeaponInventoryObject* inWeaponObject) {
}

void UIGS_SimpleShooter::OnRep_ShootingChanged(bool inWasShooting) {
}

void UIGS_SimpleShooter::IsShooting(bool& outIsShooting) {
}

void UIGS_SimpleShooter::InitializeMuzzleReference(UChildActorComponent* inMuzzleComponent) {
}

void UIGS_SimpleShooter::InitAkComponent(UAkComponent* inAkComponent) {
}

float UIGS_SimpleShooter::GetRPM() const {
    return 0.0f;
}

int32 UIGS_SimpleShooter::GetProjectilesPerShot() const {
    return 0;
}

void UIGS_SimpleShooter::BeginAttack(const bool inForced) {
}

void UIGS_SimpleShooter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SimpleShooter, mR_bIsShooting);
}


