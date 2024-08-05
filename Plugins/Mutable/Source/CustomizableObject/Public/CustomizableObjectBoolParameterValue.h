#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectBoolParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectBoolParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectBoolParameterValue();
};

