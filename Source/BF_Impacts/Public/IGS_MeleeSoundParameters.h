#pragma once
#include "CoreMinimal.h"
#include "IGS_MeleeSoundParameters.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_MeleeSoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkSwitchValue> WeaponNameAkSwitch;
    
    FIGS_MeleeSoundParameters();
};

