#pragma once
#include "CoreMinimal.h"
#include "IGS_BotMovementOverride.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_BotMovementOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotOverrideMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotOverrideBrakingDecelerationWalking;
    
    FIGS_BotMovementOverride();
};

