#include "IGS_ShooterBase.h"

UIGS_ShooterBase::UIGS_ShooterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShootFromCamera = true;
    this->bIsSuppressed = false;
    this->ShooterType = EIGS_WeaponAttackType::AT_SemiAuto;
    this->m_ProjectileClass = NULL;
    this->bForceFeedbackLooped = false;
    this->ForceFeedbackName = TEXT("Shooting");
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


