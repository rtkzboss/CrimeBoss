#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueVoiceEventDelegate.generated.h"

class UAkExternalMediaAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaDialogueVoiceEvent, UAkExternalMediaAsset*, VoiceMedia);

