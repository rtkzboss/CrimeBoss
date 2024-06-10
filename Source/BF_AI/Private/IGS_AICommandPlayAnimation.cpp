#include "IGS_AICommandPlayAnimation.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandPlayAnimation::UIGS_AICommandPlayAnimation() {
    (*this).Type = EIGS_AICommandType::AICT_PlayAnimation;
}


