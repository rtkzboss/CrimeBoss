#include "IGS_ReplicationAnimationDataHolder.h"

FIGS_ReplicationAnimationDataHolder::FIGS_ReplicationAnimationDataHolder() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MontageVariationTag, 0)) = NAME_None;
    (*this).EventTransform.Location.X = 0.000000000e+00f;
    (*this).EventTransform.Location.Y = 0.000000000e+00f;
    (*this).EventTransform.Location.Z = 0.000000000e+00f;
    (*this).EventTransform.Rotation.X = 0.000000000e+00f;
    (*this).EventTransform.Rotation.Y = 0.000000000e+00f;
    (*this).EventTransform.Rotation.Z = 0.000000000e+00f;
    (*this).RequestedDuration = -1.000000000e+00f;
    (*this).RandomSeed = 0;
    (*this).bPlayingAnimation = false;
    (*this).FinishReason = EIGS_AnimationTaskFinishedReason::Reason_Unknown;
    (*this).CarType = EIGS_CarType::C_Unknown;
    (*this).SeatVariant = EIGS_CarSeatVariant::CS_Unknown;
}

