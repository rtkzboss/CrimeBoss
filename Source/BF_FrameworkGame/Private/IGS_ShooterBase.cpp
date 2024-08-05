#include "IGS_ShooterBase.h"
#include "AkAudioEvent.h"
#include "AkRtpc.h"
#include "AkSwitchValue.h"
#include "Engine/CurveTable.h"
#include "ComponentInstanceDataCache.h"
#include "GameFramework/ForceFeedbackEffect.h"

UIGS_ShooterBase::UIGS_ShooterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bShootFromCamera = true;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Single.AKE_WeaponFire_Single"));
    (*this).SingleShotAudioEvent = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen1(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Empty.AKE_WeaponFire_Empty"));
    (*this).EmptyShotAudioEvent = gen1.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen2(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponAim_Hip.AKE_WeaponAim_Hip"));
    (*this).HipAimAkEvent = gen2.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen3(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponAim_Sights.AKE_WeaponAim_Sights"));
    (*this).SightsAimAkEvent = gen3.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen4(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponState/SwitchGrp_WeaponState-Switch_Normal.SwitchGrp_WeaponState-Switch_Normal"));
    (*this).NormalStateAkSwitch = gen4.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen5(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponState/SwitchGrp_WeaponState-Switch_Suppressed.SwitchGrp_WeaponState-Switch_Suppressed"));
    (*this).SuppressedStateAkSwitch = gen5.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen6(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponFireMode/SwitchGrp_WeaponFireMode-Switch_Normal.SwitchGrp_WeaponFireMode-Switch_Normal"));
    (*this).NormalFireModeStateAkSwitch = gen6.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen7(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponFireMode/SwitchGrp_WeaponFireMode-Switch_Extra.SwitchGrp_WeaponFireMode-Switch_Extra"));
    (*this).ExtraFireModeStateAkSwitch = gen7.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen8(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponFireRate.RTPC_WeaponFireRate"));
    (*this).FireRateAkRtpc = gen8.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen9(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponRoundsLeft.RTPC_WeaponRoundsLeft"));
    (*this).RoundsLeftAkRtpc = gen9.Object;
    static ConstructorHelpers::FObjectFinder<UAkRtpc> gen10(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponAimDownSight.RTPC_WeaponAimDownSight"));
    (*this).AdsAkRtpc = gen10.Object;
    static ConstructorHelpers::FObjectFinder<UForceFeedbackEffect> gen11(TEXT("/Game/00_Main/Weapons/_Common/FFE_WeaponBase.FFE_WeaponBase"));
    (*this).ForceFeedbackEffect = gen11.Object;
    (*this).ForceFeedbackName = TEXT("Shooting");
    (*this).ShotgunHorizontalSpreadMultiplier.Value = 1.000000000e+00f;
    static ConstructorHelpers::FObjectFinder<UCurveTable> gen12(TEXT("/Game/00_Main/Core/Characters/CT_PlayerSettings.CT_PlayerSettings"));
    (*this).ShotgunHorizontalSpreadMultiplier.Curve.CurveTable = gen12.Object;
    (*this).ShotgunHorizontalSpreadMultiplier.Curve.RowName = TEXT("Player.Weapons.Shotgun.HorizontalSpreadMult");
}

void UIGS_ShooterBase::TEST_SetWeaponModeEnabled(bool inState) {
}

void UIGS_ShooterBase::TEST_SetVibrationModeEnabled(bool inState) {
}

void UIGS_ShooterBase::TEST_PlusWeaponStrength() {
}

void UIGS_ShooterBase::TEST_PlusWeaponStartPosition() {
}

void UIGS_ShooterBase::TEST_PlusWeaponEndPosition() {
}

void UIGS_ShooterBase::TEST_PlusVibrationPosition() {
}

void UIGS_ShooterBase::TEST_PlusVibrationFrequency() {
}

void UIGS_ShooterBase::TEST_PlusVibrationAmplitude() {
}

void UIGS_ShooterBase::TEST_MinusWeaponStrength() {
}

void UIGS_ShooterBase::TEST_MinusWeaponStartPosition() {
}

void UIGS_ShooterBase::TEST_MinusWeaponEndPosition() {
}

void UIGS_ShooterBase::TEST_MinusVibrationPosition() {
}

void UIGS_ShooterBase::TEST_MinusVibrationFrequency() {
}

void UIGS_ShooterBase::TEST_MinusVibrationAmplitude() {
}

int32 UIGS_ShooterBase::TEST_GetWeaponStrength() const {
    return 0;
}

int32 UIGS_ShooterBase::TEST_GetWeaponStartPosittion() const {
    return 0;
}

int32 UIGS_ShooterBase::TEST_GetWeaponEndPosition() const {
    return 0;
}

int32 UIGS_ShooterBase::TEST_GetVibrationPosition() const {
    return 0;
}

int32 UIGS_ShooterBase::TEST_GetVibrationFrequency() const {
    return 0;
}

int32 UIGS_ShooterBase::TEST_GetVibrationAmplitude() const {
    return 0;
}

void UIGS_ShooterBase::SetDualSenseTriggers() const {
}

void UIGS_ShooterBase::ResetDualSenseTriggers() {
}

void UIGS_ShooterBase::OnShooterStopAttack_Implementation() {
}

void UIGS_ShooterBase::OnShooterBeginAttack_Implementation() {
}

void UIGS_ShooterBase::OnProjectileActivated_Implementation(AIGS_ProjectileBase* inProjectile) {
}

void UIGS_ShooterBase::OnProjectileAcquired_Implementation(AIGS_ProjectileBase* inProjectile) {
}


