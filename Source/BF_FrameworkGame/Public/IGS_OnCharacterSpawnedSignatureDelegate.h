#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharacterSpawnedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCharacterSpawnedSignature, AIGS_GameCharacterFramework*, inCharacter);

