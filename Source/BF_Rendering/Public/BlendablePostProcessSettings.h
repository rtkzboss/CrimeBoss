#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "BlendablePostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FBlendablePostProcessSettings : public FPostProcessSettings {
    GENERATED_BODY()
public:
    BF_RENDERING_API FBlendablePostProcessSettings();
};

