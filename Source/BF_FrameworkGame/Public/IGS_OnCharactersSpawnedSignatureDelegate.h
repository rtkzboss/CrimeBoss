#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharactersSpawnedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCharactersSpawnedSignature, const TArray<AIGS_GameCharacterFramework*>&, inCharacters);

