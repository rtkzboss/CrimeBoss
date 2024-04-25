#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"
#include "META_AllowedEquipmentInfo.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AllowedEquipmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, int32> EquipmentClassChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> EquipmentQualityChance;
    
    FMETA_AllowedEquipmentInfo();
};

