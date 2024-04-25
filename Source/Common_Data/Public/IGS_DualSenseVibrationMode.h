#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseVibrationMode.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DualSenseVibrationMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Amplitude;
    
    FIGS_DualSenseVibrationMode();
};

