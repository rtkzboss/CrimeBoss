#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectFloatParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectFloatParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ParameterRangeValues;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectFloatParameterValue();
};

