#include "IGS_UWeaponAniminstance.h"

UIGS_UWeaponAniminstance::UIGS_UWeaponAniminstance() {
    this->IsAmmoInMagazine = false;
    this->CharacterSpeed = 0.00f;
    this->CharacterJump = false;
    this->CharacterCrouch = false;
    this->ReloadPlayRate = 1.00f;
    this->LeaningDirection = EIGS_CharacterLeaningDirectionEnum::None;
    this->m_AutomaticShooter = NULL;
    this->m_WeaponBase = NULL;
    this->m_ShooterBase = NULL;
    this->m_ReloadBase = NULL;
    this->m_SimpleReloader = NULL;
    this->m_Character = NULL;
    this->m_PlayerCharacter = NULL;
    this->m_PlayerAnimInstance = NULL;
}









bool UIGS_UWeaponAniminstance::Is_TPP_Animinstance() {
    return false;
}


EIGS_WeaponAttackType UIGS_UWeaponAniminstance::GetAttackType() const {
    return EIGS_WeaponAttackType::AT_SemiAuto;
}

void UIGS_UWeaponAniminstance::AnimNotify_OnReloadFromMontage_Implementation() {
}


