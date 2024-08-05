#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_UsableEquipment.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_UsableEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FGameplayTag> Data;
    
    FMETA_UsableEquipment();
};

