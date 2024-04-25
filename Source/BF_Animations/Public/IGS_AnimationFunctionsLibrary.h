#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "EIGS_FootstepType.h"
#include "Templates/SubclassOf.h"
#include "IGS_AnimationFunctionsLibrary.generated.h"

class UAnimInstance;
class UAnimMontage;
class UAnimNotify_Footstep;
class UAnimSequence;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimationFunctionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AnimationFunctionsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidAnimNotifyTrackName(const UAnimSequence* AnimationSequence, FName NotifyTrackName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingSlotMontage(UAnimInstance* inInstance, UAnimMontage* inMontage, FName SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRootMotionTransform(UAnimInstance* inAnimInstance, const FName& SlotName);
    
    UFUNCTION(BlueprintCallable)
    static void GetNotifiesTriggerTimes(UAnimInstance* inAnimInstance, TArray<float>& outStartTimes, TArray<float>& outEndTimes);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurveValueAtTime(UAnimSequence* InAnimSequence, const FName CurveName, const float Time);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurveTimeAtValue(UAnimSequence* InAnimSequence, const FName CurveName, int32 NumOfSamples, const float CurveValue);
    
    UFUNCTION(BlueprintCallable)
    static UAnimNotify_Footstep* AddFootStepNotifyEvent(UAnimSequence* AnimationSequence, FName NotifyTrackName, float StartTime, TSubclassOf<UAnimNotify_Footstep> NotifyClass, const FName& InBoneName, TEnumAsByte<ETraceTypeQuery> inTraceChannel, EIGS_FootstepType inFootstepType);
    
};

