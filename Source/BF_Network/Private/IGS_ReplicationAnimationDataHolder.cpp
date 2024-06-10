#include "IGS_ReplicationAnimationDataHolder.h"

FIGS_ReplicationAnimationDataHolder::FIGS_ReplicationAnimationDataHolder() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MontageVariationTag, 0)) = NAME_None;
    (*this).RequestedDuration = -1.000000000e+00f;
    (*this).RandomSeed = 0;
    (*this).bPlayingAnimation = false;
    (*this).FinishReason = EIGS_AnimationTaskFinishedReason::Reason_Unknown;
    (*this).CarType = EIGS_CarType::C_Unknown;
    (*this).SeatVariant = EIGS_CarSeatVariant::CS_Unknown;
}

