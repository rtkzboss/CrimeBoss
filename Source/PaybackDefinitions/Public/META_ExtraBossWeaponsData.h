#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_ExtraBossWeaponsData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ExtraBossWeaponsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality Quality;
    
    FMETA_ExtraBossWeaponsData();
};

