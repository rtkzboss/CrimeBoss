#pragma once
#include "CoreMinimal.h"
#include "SpecificFPSCharacterPortraitReadyOutputPinDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecificFPSCharacterPortraitReadyOutputPin, UTexture2D*, inCharacterPortrait);

