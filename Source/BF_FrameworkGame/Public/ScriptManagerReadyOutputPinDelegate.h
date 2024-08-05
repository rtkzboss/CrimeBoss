#pragma once
#include "CoreMinimal.h"
#include "ScriptManagerReadyOutputPinDelegate.generated.h"

class AIGS_ScriptManagerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScriptManagerReadyOutputPin, AIGS_ScriptManagerBase*, ScriptManager);

