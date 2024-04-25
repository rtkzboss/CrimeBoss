#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusUsage.h"
#include "META_BonusTypeData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BonusTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_BonusUsage BonusUsage;
    
    FMETA_BonusTypeData();
};

