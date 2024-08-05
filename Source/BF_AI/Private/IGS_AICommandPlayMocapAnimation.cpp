#include "IGS_AICommandPlayMocapAnimation.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandPlayMocapAnimation::UIGS_AICommandPlayMocapAnimation() {
    (*this).Type = EIGS_AICommandType::AICT_PlayMocapAnimation;
}


