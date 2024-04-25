#pragma once
#include "CoreMinimal.h"
#include "IGS_DsVibrationTrigger.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsVibrationTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Amplitude;
    
    BF_INPUT_API FIGS_DsVibrationTrigger();
};

