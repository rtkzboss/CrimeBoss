#include "IGS_AnimationFunctionsLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_AnimationFunctionsLibrary::UIGS_AnimationFunctionsLibrary() {
}

bool UIGS_AnimationFunctionsLibrary::IsValidAnimNotifyTrackName(const UAnimSequence* AnimationSequence, FName NotifyTrackName) {
    return false;
}

bool UIGS_AnimationFunctionsLibrary::IsPlayingSlotMontage(UAnimInstance* inInstance, UAnimMontage* inMontage, FName SlotName) {
    return false;
}

FTransform UIGS_AnimationFunctionsLibrary::GetRootMotionTransform(UAnimInstance* inAnimInstance, const FName& SlotName) {
    return FTransform{};
}

void UIGS_AnimationFunctionsLibrary::GetNotifiesTriggerTimes(UAnimInstance* inAnimInstance, TArray<float>& outStartTimes, TArray<float>& outEndTimes) {
}

float UIGS_AnimationFunctionsLibrary::GetCurveValueAtTime(UAnimSequence* InAnimSequence, const FName CurveName, const float Time) {
    return 0.0f;
}

float UIGS_AnimationFunctionsLibrary::GetCurveTimeAtValue(UAnimSequence* InAnimSequence, const FName CurveName, int32 NumOfSamples, const float CurveValue) {
    return 0.0f;
}

UAnimNotify_Footstep* UIGS_AnimationFunctionsLibrary::AddFootStepNotifyEvent(UAnimSequence* AnimationSequence, FName NotifyTrackName, float StartTime, TSubclassOf<UAnimNotify_Footstep> NotifyClass, const FName& InBoneName, TEnumAsByte<ETraceTypeQuery> inTraceChannel, EIGS_FootstepType inFootstepType) {
    return NULL;
}


