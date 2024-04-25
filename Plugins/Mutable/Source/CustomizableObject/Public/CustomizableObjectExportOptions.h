#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectExportOptions.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectExportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTextureCompression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlatform;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectExportOptions();
};

