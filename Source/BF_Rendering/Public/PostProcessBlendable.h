#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/BlendableInterface.h"
#include "BlendablePostProcessSettings.h"
#include "PostProcessBlendable.generated.h"

UCLASS(Blueprintable)
class BF_RENDERING_API UPostProcessBlendable : public UObject, public IBlendableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendablePostProcessSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPostProcessBlendable();


    // Fix for true pure virtual functions not being implemented
    virtual void OverrideBlendableSettings(class FSceneView& View, float Weight) const override {  }
};

