#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureMipDataProviderFactory.h"
#include "MutableTextureMipDataProviderFactory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CUSTOMIZABLEOBJECT_API UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory {
    GENERATED_BODY()
public:
    UMutableTextureMipDataProviderFactory();

};

