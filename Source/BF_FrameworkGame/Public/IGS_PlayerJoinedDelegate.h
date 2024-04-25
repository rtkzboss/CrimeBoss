#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerJoinedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerJoined, AIGS_GameCharacterFramework*, inGameCharacter);

