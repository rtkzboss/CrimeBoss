#pragma once
#include "CoreMinimal.h"
#include "IGS_TPVAnimtionDefinition.h"
#include "IGS_TPVAttackTypeAnimData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_TPVAttackTypeAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPVAnimtionDefinition AnimationTypeData;
    
    BF_ANIMATIONS_API FIGS_TPVAttackTypeAnimData();
};

