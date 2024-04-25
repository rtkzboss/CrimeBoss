#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UnlockRewardMaxAmount.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockRewardMaxAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> MaxAmountMap;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockRewardMaxAmount();
};

