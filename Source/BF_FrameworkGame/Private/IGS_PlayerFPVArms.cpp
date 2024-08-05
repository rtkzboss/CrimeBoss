#include "IGS_PlayerFPVArms.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PlayerFPVArms::AIGS_PlayerFPVArms(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bMoveArmsInCode = true;
    (*this).bRotateArmsPitchInCode = true;
    (*this).ArmsGrabLadderRotationSpeed = 2.000000000e+00f;
}

void AIGS_PlayerFPVArms::SetArmsTickEnabled_Implementation(bool Enabled) {
}


