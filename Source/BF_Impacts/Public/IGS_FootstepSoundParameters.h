#pragma once
#include "CoreMinimal.h"
#include "EIGS_MovementSlope.h"
#include "IGS_FootstepSoundParameters.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_FootstepSoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MovementSlope SlopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkSwitchValue> FootstepAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkSwitchValue> ShoeAkSwitch;
    
    FIGS_FootstepSoundParameters();
};

