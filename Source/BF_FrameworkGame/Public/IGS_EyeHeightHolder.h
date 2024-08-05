#pragma once
#include "CoreMinimal.h"
#include "IGS_EyeHeightHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_EyeHeightHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    BF_FRAMEWORKGAME_API FIGS_EyeHeightHolder();
};

