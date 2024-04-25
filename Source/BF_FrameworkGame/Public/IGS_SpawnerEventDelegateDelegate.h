#pragma once
#include "CoreMinimal.h"
#include "IGS_SpawnerEventDelegateDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIGS_SpawnerEventDelegate, const TArray<AIGS_GameCharacterFramework*>&, inSpawnedCharacters);

