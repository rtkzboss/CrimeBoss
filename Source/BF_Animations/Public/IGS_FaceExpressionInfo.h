#pragma once
#include "CoreMinimal.h"
#include "IGS_FaceExpressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FaceExpressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDuration;
    
    BF_ANIMATIONS_API FIGS_FaceExpressionInfo();
};

