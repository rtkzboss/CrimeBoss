#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_AI_Throw_Animaitons.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_AI_Throw_Animaitons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeStandUp02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeStandDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeCrouchUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeCrouchUp02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeCrouchDown;
    
    BF_ANIMATIONS_API FIGS_TPP_AI_Throw_Animaitons();
};

