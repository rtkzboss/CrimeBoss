#pragma once
#include "CoreMinimal.h"
#include "CharacterPortraitReadyOutputPinDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterPortraitReadyOutputPin, UTexture2D*, inCharacterPortrait);

