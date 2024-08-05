#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaskOutTexture.h"
#include "MutableMaskOutCache.generated.h"

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECT_API UMutableMaskOutCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMaskOutTexture> Textures;
    
    UMutableMaskOutCache();

};

