#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectProjector.h"
#include "CustomizableObjectProjectorParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectProjectorParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizableObjectProjector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectProjector> RangeValues;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectProjectorParameterValue();
};

