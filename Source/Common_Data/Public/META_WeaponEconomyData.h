#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_WeaponEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccesfullMissionsForUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfWeaponsForUpgradeSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval BuyCostValueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SellMultiplier;
    
    FMETA_WeaponEconomyData();
};

