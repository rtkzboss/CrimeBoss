#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.generated.h"

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFallbackSettings;
    
    FIGS_ImpactSettings();
};

