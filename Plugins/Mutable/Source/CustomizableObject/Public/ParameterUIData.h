#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectGroupType.h"
#include "EMutableParameterType.h"
#include "IntegerParameterUIData.h"
#include "MutableParamUIMetadata.h"
#include "ParameterUIData.generated.h"

USTRUCT(BlueprintType)
struct FParameterUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMutableParamUIMetadata ParamUIMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMutableParameterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntegerParameterUIData> ArrayIntegerParameterOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizableObjectGroupType IntegerParameterGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontCompressRuntimeTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ForcedParameterValues;
    
    CUSTOMIZABLEOBJECT_API FParameterUIData();
};

