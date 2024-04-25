#include "IGS_PlayerAnimInstance.h"

UIGS_PlayerAnimInstance::UIGS_PlayerAnimInstance() {
    this->ReloadInterruptUseEvents = false;
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->DeathPoseSnapshot = false;
    this->CharacterState = EIGS_CharacterState::Calm;
    this->IsInCover = false;
    this->AimSwitch = false;
    this->bPanicLoop = false;
    this->bGetDown = false;
    this->bGetDownKneel = false;
    this->bGetDownScary = false;
    this->bZiptieStart = false;
    this->PanicPercent = 0.00f;
    this->bEmployeeReaction = false;
    this->bLookAtAnim = false;
    this->bLookAtDisabled = false;
    this->bIsOnGround = false;
    this->FixFemaleHandsIK = false;
    this->LootBagHand = false;
    this->IsRMAction = false;
    this->DisableFootIK = false;
    this->IsSwatAnimation = false;
    this->IsPlayerAnimation = false;
    this->NavlinkLeftMatching = false;
    this->NavlinkRightMatching = false;
    this->IsNotMoving = false;
    this->ShieldOnBack = false;
    this->IsInCar = false;
    this->bAvoidancePoseEnabled = false;
    this->bIsCoverLeaning = false;
    this->OneHandCalmWeaponPose = false;
    this->LeanLeftStand = NULL;
    this->LeanRightStand = NULL;
    this->LeanLeftCrouch = NULL;
    this->LeanRightCrouch = NULL;
    this->RequestedLeanSide = EIGS_LeanSide::LeanSide_None;
    this->FacialAnimationStates = EIGS_FacialEmotionStates::FES_Default;
    this->FacialAnimationIdles = EIGS_FacialEmotionIdles::FEI_Default;
    this->EquipPoseSwitch = false;
    this->EquipSwitchblend = 0.00f;
    this->EnableFirstEquip = false;
    this->Is_Shooting = true;
    this->Is_Reloading = false;
    this->ReloadPlayRate = 1.00f;
    this->WeaponGripStand = NULL;
    this->WeaponGripCrouch = NULL;
    this->WeaponGripRun = NULL;
    this->WeaponGripCalm = NULL;
    this->WeaponGripGunDown = NULL;
    this->WeaponAimOffset = NULL;
    this->WeaponAimOffsetCrouch = NULL;
    this->WeaponAimOffsetAim = NULL;
    this->WeaponAimOffsetAimCrouch = NULL;
    this->WeaponAimOffsetLow = NULL;
    this->WeaponFireStandFront = NULL;
    this->WeaponFireStandFrontInjured = NULL;
    this->WeaponReloadStandInjured = NULL;
    this->WeaponFireCrouchLeft = NULL;
    this->WeaponFireCrouchFront = NULL;
    this->WeaponFireCrouchRight = NULL;
    this->WeaponFireWeaponMesh = NULL;
    this->WeaponReload = NULL;
    this->WeaponEquip = NULL;
    this->WeaponUnequip = NULL;
    this->Idle = NULL;
    this->IdleCrouch = NULL;
    this->IdleCrouchAIM = NULL;
    this->Locomotion = NULL;
    this->LocomotionCrouch = NULL;
    this->LocomotionSprint = NULL;
    this->TurnBlendSpace = NULL;
    this->TurnBlendSpaceCrouch = NULL;
    this->StandToCrouch = NULL;
    this->CrouchToStand = NULL;
    this->JumpStart = NULL;
    this->JumpLoop = NULL;
    this->JumpEnd = NULL;
    this->Reload = false;
    this->Is_Controlled_by_AI = false;
    this->ForceMoveState = false;
    this->SlideState = EIGS_SlideEnumState::EBF_NotSliding;
    this->LeftHandIKEnabled = true;
    this->RightHandIKEnabled = true;
    this->FirstEquipAlways = false;
    this->DisableHolsterAnimation = false;
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








