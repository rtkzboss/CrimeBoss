#pragma once
#include "CoreMinimal.h"
#include "IGS_PostProcessEffect.generated.h"

class IBlendableInterface;
class UBlendableInterface;

USTRUCT(BlueprintType)
struct FIGS_PostProcessEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBlendableInterface> PostProcessMaterial;
    
    BF_RENDERING_API FIGS_PostProcessEffect();
};

