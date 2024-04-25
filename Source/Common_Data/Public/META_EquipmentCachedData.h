#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_EquipmentCachedData.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_EquipmentCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_EquipmentInventoryObject> EquipmentItem;
    
    FMETA_EquipmentCachedData();
};

