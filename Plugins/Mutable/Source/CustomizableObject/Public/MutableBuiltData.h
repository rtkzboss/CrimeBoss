#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MutableBuiltData.generated.h"

USTRUCT(BlueprintType)
struct FMutableBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CompilationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupportedVersion;
    
    CUSTOMIZABLEOBJECT_API FMutableBuiltData();
};

