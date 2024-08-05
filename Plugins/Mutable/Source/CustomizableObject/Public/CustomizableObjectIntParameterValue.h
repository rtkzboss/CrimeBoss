#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectIntParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectIntParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ParameterRangeValueNames;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectIntParameterValue();
};

