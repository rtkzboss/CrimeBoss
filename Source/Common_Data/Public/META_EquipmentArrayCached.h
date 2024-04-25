#pragma once
#include "CoreMinimal.h"
#include "META_EquipmentCachedData.h"
#include "META_EquipmentArrayCached.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_EquipmentArrayCached {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_EquipmentCachedData> EquipmentItems;
    
    FMETA_EquipmentArrayCached();
};

