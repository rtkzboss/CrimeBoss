#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_AkSwitchVolume.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_AkSwitchVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FootstepAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FootstepNoneAkSwitch;
    
public:
    AIGS_AkSwitchVolume(const FObjectInitializer& ObjectInitializer);

};

