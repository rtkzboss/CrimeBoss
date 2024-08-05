#pragma once
#include "CoreMinimal.h"
#include "MutableModelParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FMutableModelParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    CUSTOMIZABLEOBJECT_API FMutableModelParameterValue();
};

