#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_WeaponGenerationRestriction.h"
#include "META_ItemQualityBitmask.h"
#include "META_HeisterEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval HireValueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval UpkeepValueRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MissionCutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ItemQualityBitmask WeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponGenerationRestriction WeaponGenerationRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ItemQualityBitmask EquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipmentChance;
    
    FMETA_HeisterEconomyData();
};

