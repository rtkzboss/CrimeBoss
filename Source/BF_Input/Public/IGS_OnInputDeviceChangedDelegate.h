#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "IGS_OnInputDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnInputDeviceChanged, EIGS_InputDevice, inNewInputDevice);

