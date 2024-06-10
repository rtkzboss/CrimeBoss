#include "IGS_UArmsAniminstance.h"

UIGS_UArmsAniminstance::UIGS_UArmsAniminstance() {
    (*this).SlideState = EIGS_SlideEnumState::EBF_NotSliding;
    (*this).ReloadPlayRate = 1.000000000e+00f;
    (*this).SemiAutoShootingTime = 5.000000000e-01f;
    (*this).IdleSwayIntensityAttribute = 1.000000000e+00f;
    (*this).CombatStatus = EIGS_CombatStatus::EIGS_Stealth;
    (*this).CrouchingAdsOffset = 2.000000000e+01f;
    (*this).JumpingCameraOffset = 3.000000000e+01f;
    (*this).IsUnarmed = true;
    (*this).IsUnequipBlendedOut = true;
}











void UIGS_UArmsAniminstance::PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds) {
}






void UIGS_UArmsAniminstance::OnReloadMontageNotifyAddAmmoToWeapon() const {
}




void UIGS_UArmsAniminstance::OnMagCheckEnd() {
}


void UIGS_UArmsAniminstance::OnInspectEnd() {
}


void UIGS_UArmsAniminstance::OnDownstateChanged(EIGS_HealthState& outDownState) const {
}


FIGS_FirstPersonAnimationDatabase UIGS_UArmsAniminstance::GetWeaponAnimations() {
    return FIGS_FirstPersonAnimationDatabase{};
}

FIGS_FirstPersonThrowablesAnimDatabase UIGS_UArmsAniminstance::GetThrowablesAnimationsDatabase() {
    return FIGS_FirstPersonThrowablesAnimDatabase{};
}

FIGS_FirstPersonMeleeAnimDatabase UIGS_UArmsAniminstance::GetMeleeAnimationsDatabase() {
    return FIGS_FirstPersonMeleeAnimDatabase{};
}

void UIGS_UArmsAniminstance::GetHolsterAnimationData(FIGS_HolsterAnimationInfo& outHolsterAnimationInfo) const {
}

EIGS_WeaponAttackType UIGS_UArmsAniminstance::GetAttackType() const {
    return EIGS_WeaponAttackType::AT_SemiAuto;
}

void UIGS_UArmsAniminstance::GetAimAnimationData(FIGS_AimAnimationInfo& outAimAnimationInfo) const {
}



