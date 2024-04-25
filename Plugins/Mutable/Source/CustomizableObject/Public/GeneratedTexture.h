#pragma once
#include "CoreMinimal.h"
#include "GeneratedTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGeneratedTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    CUSTOMIZABLEOBJECT_API FGeneratedTexture();
};

