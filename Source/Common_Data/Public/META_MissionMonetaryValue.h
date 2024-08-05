#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_MissionMonetaryValue.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionMonetaryValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveMonetaryValueInPercents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MaxMonetaryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MultiplierOfExpensesForBigHeistInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MultiplierOfExpensesForMissionsWithIntelInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MultiplierOfExpensesForMissionsWithoutIntelInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierOfMaxMonetaryValueForMissionWithIntel;
    
    FMETA_MissionMonetaryValue();
};

