#pragma once
#include "CoreMinimal.h"
#include "ConstraintRanges.generated.h"

USTRUCT(BlueprintType)
struct FConstraintRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangeWeight;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FConstraintRanges();
};

