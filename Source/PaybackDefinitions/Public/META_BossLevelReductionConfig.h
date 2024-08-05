#pragma once
#include "CoreMinimal.h"
#include "META_BossLevelReductionConfig.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BossLevelReductionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBossLevelForReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSuccessfulMissionsForNoReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlotlineProgressInPlotlineModeForNoReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReductionCurve;
    
    FMETA_BossLevelReductionConfig();
};

