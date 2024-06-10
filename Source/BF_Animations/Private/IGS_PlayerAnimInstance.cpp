#include "IGS_PlayerAnimInstance.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_HealthState.h"
#include "EIGS_CharacterHealthAnimState.h"
#include "EIGS_LocomotionType.h"
#include "EIGS_SpecialDeathNotifyState.h"

UIGS_PlayerAnimInstance::UIGS_PlayerAnimInstance() {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).Is_Shooting = true;
    (*this).ReloadPlayRate = 1.000000000e+00f;
    (*this).SlideState = EIGS_SlideEnumState::EBF_NotSliding;
    (*this).LeftHandIKEnabled = true;
    (*this).RightHandIKEnabled = true;
}




void UIGS_PlayerAnimInstance::TriggerAnimationEvent() {
}










void UIGS_PlayerAnimInstance::SetIsInLocomotionState(bool inIsInLocomotion) {
}






void UIGS_PlayerAnimInstance::PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds) {
}



void UIGS_PlayerAnimInstance::OnZiptieFinished() {
}

void UIGS_PlayerAnimInstance::OnWieldableSlotChange(EIGS_WieldableSlot Type, AIGS_WieldableBase* inWieldable, UIGS_InventoryObjectFramework* inWeaponObject) {
}

void UIGS_PlayerAnimInstance::OnWeaponObjectChange(AIGS_WieldableBase* InWeaponBase) {
}

void UIGS_PlayerAnimInstance::OnWeaponAimChange(bool IsAiming) {
}


void UIGS_PlayerAnimInstance::OnStoodUp() {
}




void UIGS_PlayerAnimInstance::OnReviveStart() {
}


void UIGS_PlayerAnimInstance::OnReactionAnimFinished() {
}




void UIGS_PlayerAnimInstance::OnMagCheckEnd() {
}

void UIGS_PlayerAnimInstance::OnGotToGround() {
}


void UIGS_PlayerAnimInstance::OnDownstateStart() {
}

void UIGS_PlayerAnimInstance::OnDownStateInputEnabled() const {
}

void UIGS_PlayerAnimInstance::OnDownStateInputDisabled() const {
}

void UIGS_PlayerAnimInstance::OnDownStateDeath() {
}

void UIGS_PlayerAnimInstance::OnBeginReload(bool inIsCombat, bool inIsEmptyMagazine) {
}

void UIGS_PlayerAnimInstance::OnAttack() {
}






int32 UIGS_PlayerAnimInstance::GetReplicatedRandomInt(int32 inMin, int32 inMax) const {
    return 0;
}

float UIGS_PlayerAnimInstance::GetReplicatedRandomFloat(float inMin, float inMax) const {
    return 0.0f;
}

FIGS_ThirdPersonCarryablesAnimDatabase UIGS_PlayerAnimInstance::GetCarryableDatabse() {
    return FIGS_ThirdPersonCarryablesAnimDatabase{};
}

void UIGS_PlayerAnimInstance::GetAnimationDatabase(FPlayerAnimationsDatabase& AnimDatabase) const {
}








