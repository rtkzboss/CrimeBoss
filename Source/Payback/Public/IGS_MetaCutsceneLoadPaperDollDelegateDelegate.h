#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_MetaCutsceneLoadPaperDollDelegateDelegate.generated.h"

class AIGS_CharacterPaperDoll;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneLoadPaperDollDelegate, const TArray<TSubclassOf<AIGS_CharacterPaperDoll>>&, PaperDolls);

