#pragma once
#include "CoreMinimal.h"
#include "MutableParamUIMetadata.h"
#include "IntegerParameterUIData.generated.h"

USTRUCT(BlueprintType)
struct FIntegerParameterUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMutableParamUIMetadata ParamUIMetadata;
    
    CUSTOMIZABLEOBJECT_API FIntegerParameterUIData();
};

