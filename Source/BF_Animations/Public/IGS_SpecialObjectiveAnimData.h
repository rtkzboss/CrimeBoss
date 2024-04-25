#pragma once
#include "CoreMinimal.h"
#include "IGS_SpecialObjectiveAnimData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_SpecialObjectiveAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BreakAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakAnimationSpeed;
    
    BF_ANIMATIONS_API FIGS_SpecialObjectiveAnimData();
};

