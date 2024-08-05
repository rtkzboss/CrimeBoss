#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayersInEndMissionTriggerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_PlayersInEndMissionTriggerChanged, int32, PlayersInside, int32, MaxPlayers, const FString&, displayText);

