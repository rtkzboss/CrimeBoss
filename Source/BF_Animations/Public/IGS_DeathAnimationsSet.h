#pragma once
#include "CoreMinimal.h"
#include "IGS_DeathAnimationsSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_DeathAnimationsSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DeathAnimationMontages;
    
    BF_ANIMATIONS_API FIGS_DeathAnimationsSet();
};

