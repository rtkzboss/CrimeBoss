#include "IGS_HeadAnimInstance.h"

UIGS_HeadAnimInstance::UIGS_HeadAnimInstance() {
    this->LookAtEnabled = false;
    this->bLookAtAnim = false;
    this->bLookAtDisabled = false;
    this->AdditiveCurves = true;
    this->CharacterState = EIGS_CharacterState::Calm;
    this->FacialAnimationStates = EIGS_FacialEmotionStates::FES_Default;
    this->FacialAnimationIdles = EIGS_FacialEmotionIdles::FEI_Default;
    this->FacialExpressionWeight = 0.00f;
    this->IsInSequencer = false;
    this->ReduceWork = false;
    this->CopyPoseDisabled = false;
    this->LODLevel = 0;
    this->LOD1Plus = false;
    this->LOD2Plus = false;
    this->LOD3Plus = false;
}


bool UIGS_HeadAnimInstance::IsPlayer() const {
    return false;
}

bool UIGS_HeadAnimInstance::IsBot() const {
    return false;
}

UIGS_PlayerAnimInstance* UIGS_HeadAnimInstance::GetOwningPlayerAnimInstance() {
    return NULL;
}

int32 UIGS_HeadAnimInstance::GetLOD_Index() const {
    return 0;
}

void UIGS_HeadAnimInstance::FindEyesLookAt(const FVector& inFromLocation, FVector2D& OutEyesOffset) const {
}


