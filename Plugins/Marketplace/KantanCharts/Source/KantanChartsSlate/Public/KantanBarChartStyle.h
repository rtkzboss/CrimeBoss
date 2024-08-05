#pragma once
#include "CoreMinimal.h"
#include "KantanChartStyle.h"
#include "KantanBarChartStyle.generated.h"

USTRUCT(BlueprintType)
struct KANTANCHARTSSLATE_API FKantanBarChartStyle : public FKantanChartStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarOutlineOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarOutlineThickness;
    
    FKantanBarChartStyle();
};

