#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectTextureParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectTextureParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectTextureParameterValue();
};

