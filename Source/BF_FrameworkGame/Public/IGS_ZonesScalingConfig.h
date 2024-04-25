#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "IGS_ZonesScalingConfig.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_ZonesScalingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ZonesScalingCurve;
    
    FIGS_ZonesScalingConfig();
};

