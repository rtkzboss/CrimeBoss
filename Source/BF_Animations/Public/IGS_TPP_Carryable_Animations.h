#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Carryable_Animations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_Carryable_Animations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CarryableItemThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CarryableItemThrowLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CarryableItemObjectThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CarryableItemObjectThrowLow;
    
    BF_ANIMATIONS_API FIGS_TPP_Carryable_Animations();
};

