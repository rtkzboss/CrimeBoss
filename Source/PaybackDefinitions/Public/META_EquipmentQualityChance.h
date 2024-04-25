#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_EquipmentQualityChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_EquipmentQualityChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality EquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    PAYBACKDEFINITIONS_API FMETA_EquipmentQualityChance();
};

