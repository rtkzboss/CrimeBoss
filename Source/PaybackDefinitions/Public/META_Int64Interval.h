#pragma once
#include "CoreMinimal.h"
#include "META_Int64Interval.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_Int64Interval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Max;
    
    FMETA_Int64Interval();
};

