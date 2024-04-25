#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DefaultInputDeviceSingleSetting.h"
#include "IGS_InputActionDefaultKeysDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputActionDefaultKeysDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefaultInputDeviceSingleSetting KeyboardDefaultKeyInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefaultInputDeviceSingleSetting GamepadDefaultKeyInputs;
    
    UIGS_InputActionDefaultKeysDataAsset();

};

