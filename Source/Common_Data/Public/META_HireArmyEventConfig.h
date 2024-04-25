#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_HireArmyEventConfig.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HireArmyEventConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SoldierHireAmountPerHireEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeClampedByArmyCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClampedMinimumArmy;
    
    FMETA_HireArmyEventConfig();
};

