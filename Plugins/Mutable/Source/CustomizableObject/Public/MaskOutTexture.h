#pragma once
#include "CoreMinimal.h"
#include "MaskOutTexture.generated.h"

USTRUCT(BlueprintType)
struct FMaskOutTexture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Data;
    
public:
    CUSTOMIZABLEOBJECT_API FMaskOutTexture();
};

