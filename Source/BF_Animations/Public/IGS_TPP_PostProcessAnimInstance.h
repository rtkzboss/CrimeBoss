#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_TPP_PostProcessAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_TPP_PostProcessAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeathAnimationEnded;
    
    UIGS_TPP_PostProcessAnimInstance();

};

