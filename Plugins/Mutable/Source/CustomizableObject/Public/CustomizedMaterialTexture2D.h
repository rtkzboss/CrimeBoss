#pragma once
#include "CoreMinimal.h"
#include "CustomizedMaterialTexture2D.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCustomizedMaterialTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    CUSTOMIZABLEOBJECT_API FCustomizedMaterialTexture2D();
};

