#include "AnimNotify_Footstep.h"

UAnimNotify_Footstep::UAnimNotify_Footstep() {
    this->FootstepType = EIGS_FootstepType::None;
    this->TraceChannel = TraceTypeQuery5;
    this->TraceLength = 40.00f;
    this->ApplyOwnerScale = true;
    this->DrawDebug = false;
}


