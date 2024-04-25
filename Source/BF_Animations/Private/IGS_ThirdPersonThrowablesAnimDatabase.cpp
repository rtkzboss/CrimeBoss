#include "IGS_ThirdPersonThrowablesAnimDatabase.h"

FIGS_ThirdPersonThrowablesAnimDatabase::FIGS_ThirdPersonThrowablesAnimDatabase() {
    this->WeaponGripStand = NULL;
    this->WeaponGripCrouch = NULL;
    this->WeaponGripRun = NULL;
    this->WeaponGripCalm = NULL;
    this->WeaponGripGunDown = NULL;
    this->Idle = NULL;
    this->IdleCrouch = NULL;
    this->IdleCrouchAIM = NULL;
    this->Locomotion = NULL;
    this->LocomotionCrouch = NULL;
    this->LocomotionSprint = NULL;
    this->TransitionToWalk = NULL;
    this->TransitionToWalkCrouch = NULL;
    this->TransitionToIdleL = NULL;
    this->TransitionToIdleR = NULL;
    this->TransitionToIdleL_Crouch = NULL;
    this->TransitionToIdleR_Crouch = NULL;
    this->RestAimPose = NULL;
    this->Turn = NULL;
    this->TurnCrouch = NULL;
    this->TurnCrouchAIM = NULL;
    this->TurnBlendSpace = NULL;
    this->TurnBlendSpaceCrouch = NULL;
    this->StandToCrouch = NULL;
    this->CrouchToStand = NULL;
    this->JumpStart = NULL;
    this->JumpLoop = NULL;
    this->JumpEnd = NULL;
    this->WeaponAimOffset = NULL;
    this->WeaponAimOffsetCrouch = NULL;
    this->WeaponAimOffsetAim = NULL;
    this->WeaponAimOffsetAimCrouch = NULL;
    this->WeaponAimOffsetLow = NULL;
    this->WeaponEquip = NULL;
    this->WeaponUnequip = NULL;
    this->FirstEquip = NULL;
    this->LightHitReactions = NULL;
    this->WeaponEquip_Weapon = NULL;
    this->WeaponUnequip_Weapon = NULL;
    this->FirstEquip_Weapon = NULL;
    this->LeanLeftStand = NULL;
    this->LeanRightStand = NULL;
    this->LeanLeftCrouch = NULL;
    this->LeanRightCrouch = NULL;
    this->LeanCrouchUp = NULL;
    this->LeftHandIKEnabled = false;
    this->RightHandIKEnabled = false;
    this->LeftHandIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
}

