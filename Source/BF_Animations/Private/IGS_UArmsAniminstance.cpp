#include "IGS_UArmsAniminstance.h"

UIGS_UArmsAniminstance::UIGS_UArmsAniminstance() {
    this->SlideState = EIGS_SlideEnumState::EBF_NotSliding;
    this->AnimationSetIndex = 0;
    this->EnableFirstEquip = false;
    this->FirstEquipAlways = false;
    this->CharacterSpeed = 0.00f;
    this->CharacterDirection = 0.00f;
    this->CharacterCrouch = false;
    this->CharacterJump = false;
    this->CharacterIsShooting = false;
    this->CharacterIsReloading = false;
    this->ReloadPlayRate = 1.00f;
    this->SemiAutoShootingTime = 0.50f;
    this->PitchAim = 0.00f;
    this->IdleSwayIntensityAttribute = 1.00f;
    this->SlopeNormalized = 0.00f;
    this->GrenadePose = false;
    this->LootBagHand = false;
    this->ReloadInterruptUseEvents = false;
    this->MontageRemainingTime = 0.00f;
    this->LeaningDirection = EIGS_CharacterLeaningDirectionEnum::None;
    this->RequestedLeanSide = EIGS_LeanSide::LeanSide_None;
    this->CombatStatus = EIGS_CombatStatus::EIGS_Stealth;
    this->CrouchingAdsOffset = 20.00f;
    this->JumpingCameraOffset = 30.00f;
    this->IsUnarmed = true;
    this->IsUnequipBlendedOut = true;
    this->OneHandCalmWeaponPose = false;
    this->SpecialActionMontageActive = false;
    this->VentShaftStates = EIGS_VentShaftAnimationStates::VS_None;
    this->m_PlayerArms = NULL;
    this->m_PlayerCharacter = NULL;
    this->m_WeaponBase = NULL;
    this->m_WieldabelBase = NULL;
    this->m_ReloadBase = NULL;
    this->m_TPV_AnimInstance = NULL;
    this->m_Weapon_AnimInstance = NULL;
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



