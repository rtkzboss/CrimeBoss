#pragma once
#include "CoreMinimal.h"
#include "SpecificCharacterPortraitReadyOutputPinDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecificCharacterPortraitReadyOutputPin, UTexture2D*, inCharacterPortrait);

