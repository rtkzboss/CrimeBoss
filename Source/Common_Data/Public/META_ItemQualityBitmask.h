#pragma once
#include "CoreMinimal.h"
#include "META_ItemQualityBitmask.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_ItemQualityBitmask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quality;
    
    FMETA_ItemQualityBitmask();
};

