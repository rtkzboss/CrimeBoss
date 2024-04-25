#pragma once
#include "CoreMinimal.h"
#include "IGS_Range.h"
#include "IGS_RangeWithDistance.generated.h"

USTRUCT(BlueprintType)
struct COVERGENERATOR_API FIGS_RangeWithDistance : public FIGS_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FIGS_RangeWithDistance();
};

