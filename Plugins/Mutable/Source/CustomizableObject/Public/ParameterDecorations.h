#pragma once
#include "CoreMinimal.h"
#include "ParameterDecorations.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FParameterDecorations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Images;
    
    CUSTOMIZABLEOBJECT_API FParameterDecorations();
};

