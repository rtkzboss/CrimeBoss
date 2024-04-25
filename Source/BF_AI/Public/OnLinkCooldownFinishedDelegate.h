#pragma once
#include "CoreMinimal.h"
#include "OnLinkCooldownFinishedDelegate.generated.h"

class UIGS_NavLinkComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinkCooldownFinished, UIGS_NavLinkComponentBase*, inSmartLink);

