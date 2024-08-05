#pragma once
#include "CoreMinimal.h"
#include "META_MissionAdditionalMonetaryValue.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionAdditionalMonetaryValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor1stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor2ndStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor3rdStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveValueConvertedToMoneyInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectiveMonetaryValueInPercentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMonetaryValueMultiplier;
    
    FMETA_MissionAdditionalMonetaryValue();
};

