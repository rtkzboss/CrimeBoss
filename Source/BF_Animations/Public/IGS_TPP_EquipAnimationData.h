#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_EquipAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_EquipAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Animations;
    
    BF_ANIMATIONS_API FIGS_TPP_EquipAnimationData();
};

