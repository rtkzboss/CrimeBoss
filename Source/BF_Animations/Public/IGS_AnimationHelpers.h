#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_Anim4Sides.h"
#include "IGS_AnimationHelpers.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimationHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AnimationHelpers();

    UFUNCTION(BlueprintCallable)
    static void StopAllMontages(UAnimInstance* inAnimInstance, float inBlendOut);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Anim4Sides GetAnimationSideForAngle(float inAngle);
    
};

