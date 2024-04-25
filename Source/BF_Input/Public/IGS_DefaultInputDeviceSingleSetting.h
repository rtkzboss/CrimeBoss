#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "EIGS_InputAction.h"
#include "IGS_DefaultInputDeviceSingleSetting.generated.h"

USTRUCT(BlueprintType)
struct BF_INPUT_API FIGS_DefaultInputDeviceSingleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_InputAction, FInputActionKeyMapping> DefaultInputActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_InputAction, FInputActionKeyMapping> SecondaryInputActionKey;
    
    FIGS_DefaultInputDeviceSingleSetting();
};

