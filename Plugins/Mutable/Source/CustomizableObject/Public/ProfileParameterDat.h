#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectBoolParameterValue.h"
#include "CustomizableObjectFloatParameterValue.h"
#include "CustomizableObjectIntParameterValue.h"
#include "CustomizableObjectProjectorParameterValue.h"
#include "CustomizableObjectTextureParameterValue.h"
#include "CustomizableObjectVectorParameterValue.h"
#include "ProfileParameterDat.generated.h"

USTRUCT(BlueprintType)
struct FProfileParameterDat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectIntParameterValue> IntParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;
    
    CUSTOMIZABLEOBJECT_API FProfileParameterDat();
};

