#pragma once
#include "CoreMinimal.h"
#include "IGS_DsVibrationTrigger2.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsVibrationTrigger2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Amplitudes;
    
    BF_INPUT_API FIGS_DsVibrationTrigger2();
};

