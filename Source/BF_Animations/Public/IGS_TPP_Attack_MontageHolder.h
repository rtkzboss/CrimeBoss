#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Attack_MontageHolder.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_Attack_MontageHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActiveAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActiveWeaponAttackMontage;
    
    BF_ANIMATIONS_API FIGS_TPP_Attack_MontageHolder();
};

