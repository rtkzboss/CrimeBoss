#include "IGS_PlayerFPVArms.h"

AIGS_PlayerFPVArms::AIGS_PlayerFPVArms(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMoveArmsInCode = true;
    this->bRotateArmsPitchInCode = true;
    this->bKeepArmsAtFeet = false;
    this->ArmsGrabLadderRotationSpeed = 2.00f;
    this->LeftHandAttachedActor = NULL;
    this->RightHandAttachedActor = NULL;
}

void AIGS_PlayerFPVArms::SetArmsTickEnabled_Implementation(bool Enabled) {
}


