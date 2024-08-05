#include "IGS_BTTask_GeneralReactionWait.h"

UIGS_BTTask_GeneralReactionWait::UIGS_BTTask_GeneralReactionWait() {
    (*this).Type = EIGS_GRWaitType::GW_Unknown;
    (*this).WaitTime = 0.000000000e+00f;
    (*this).NodeName = TEXT("General Reaction Wait");
}


