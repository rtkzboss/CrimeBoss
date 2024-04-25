#pragma once
#include "CoreMinimal.h"
#include "IGS_HitReactionParams.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HitReactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationHitReactionDuration;
    
    BF_ANIMATIONS_API FIGS_HitReactionParams();
};

