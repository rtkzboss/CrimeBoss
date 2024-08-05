#pragma once
#include "CoreMinimal.h"
#include "IGS_Range.generated.h"

USTRUCT(BlueprintType)
struct COVERGENERATOR_API FIGS_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleEnd;
    
    FIGS_Range();
};

