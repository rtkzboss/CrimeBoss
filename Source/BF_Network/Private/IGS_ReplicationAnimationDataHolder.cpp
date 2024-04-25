#include "IGS_ReplicationAnimationDataHolder.h"

FIGS_ReplicationAnimationDataHolder::FIGS_ReplicationAnimationDataHolder() {
    this->RequestedDuration = 0.00f;
    this->RandomSeed = 0;
    this->bPlayingAnimation = false;
    this->FinishReason = EIGS_AnimationTaskFinishedReason::Reason_Finished;
    this->CarType = EIGS_CarType::C_Sedan;
    this->SeatVariant = EIGS_CarSeatVariant::CS_0;
}

