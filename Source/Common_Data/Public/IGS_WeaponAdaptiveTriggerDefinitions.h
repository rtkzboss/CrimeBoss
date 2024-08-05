#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseFeedbackMode.h"
#include "IGS_DualSenseVibrationMode.h"
#include "IGS_DualSenseWeaponMode.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAdaptiveTriggerDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DualSenseFeedbackMode FeedbackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DualSenseWeaponMode WeaponMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DualSenseVibrationMode VibrationMode;
    
    FIGS_WeaponAdaptiveTriggerDefinitions();
};

