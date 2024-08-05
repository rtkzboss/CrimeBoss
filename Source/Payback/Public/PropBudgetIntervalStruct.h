#pragma once
#include "CoreMinimal.h"
#include "PropBudgetIntervalStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropBudgetIntervalStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    PAYBACK_API FPropBudgetIntervalStruct();
};

