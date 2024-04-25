#pragma once
#include "CoreMinimal.h"
#include "ScriptingCommandMocapEventOutputPinDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScriptingCommandMocapEventOutputPin, AIGS_GameCharacterFramework*, Character, FName, EventName);

