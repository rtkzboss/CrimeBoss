#pragma once
#include "CoreMinimal.h"
#include "IGS_BinkMediaEventDelegate.generated.h"

class UIGS_PlayBinkMedia;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BinkMediaEvent, UIGS_PlayBinkMedia*, BinkMediaNodePlayer);

