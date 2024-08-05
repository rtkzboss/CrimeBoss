#pragma once
#include "CoreMinimal.h"
#include "EMutableParameterType.h"
#include "MutableModelParameterValue.h"
#include "MutableParamUIMetadata.h"
#include "MutableModelParameterProperties.generated.h"

USTRUCT(BlueprintType)
struct FMutableModelParameterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMutableParameterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageDescriptionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMutableModelParameterValue> PossibleValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMutableParamUIMetadata ParamUIMetadata;
    
    CUSTOMIZABLEOBJECT_API FMutableModelParameterProperties();
};

