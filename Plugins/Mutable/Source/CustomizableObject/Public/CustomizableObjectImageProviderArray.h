#pragma once
#include "CoreMinimal.h"
#include "CustomizableSystemImageProvider.h"
#include "CustomizableObjectImageProviderArray.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECT_API UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    UCustomizableObjectImageProviderArray();

};

