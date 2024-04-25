#include "IGS_AICommandPlayMocapAnimation.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandPlayMocapAnimation::UIGS_AICommandPlayMocapAnimation() {
    this->Type = EIGS_AICommandType::AICT_PlayMocapAnimation;
    this->AnimationMontage = NULL;
    this->PlayRate = 0.00f;
    this->StartPosition = 0.00f;
}


