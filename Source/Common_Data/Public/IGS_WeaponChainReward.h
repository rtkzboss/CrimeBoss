#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponChainReward.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponChainReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemQualityFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FIGS_WeaponChainReward();
};

