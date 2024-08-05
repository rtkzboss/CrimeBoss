#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PostProcessAsset.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class UPostProcessAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPostProcessAsset();

};

