#pragma once
#include "CoreMinimal.h"
#include "GeneratedTexture.h"
#include "GeneratedMaterial.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedTexture> Textures;
    
    CUSTOMIZABLEOBJECT_API FGeneratedMaterial();
};

