#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlotlineGraphStartTime.h"
#include "META_PlotlineGraphStartTime.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PlotlineGraphStartTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PlotlineGraphStartTime Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDay;
    
    PAYBACKDEFINITIONS_API FMETA_PlotlineGraphStartTime();
};

