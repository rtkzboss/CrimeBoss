#pragma once
#include "CoreMinimal.h"
#include "IGS_OnAllCharactersDeathSignatureDelegate.generated.h"

class AIGS_AIEnemyGroupSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAllCharactersDeathSignature, AIGS_AIEnemyGroupSpawner*, inSpawnGroup);

