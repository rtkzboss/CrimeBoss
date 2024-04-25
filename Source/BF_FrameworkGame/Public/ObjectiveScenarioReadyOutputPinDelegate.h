#pragma once
#include "CoreMinimal.h"
#include "ObjectiveScenarioReadyOutputPinDelegate.generated.h"

class AIGS_ObjectiveScenarioBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveScenarioReadyOutputPin, AIGS_ObjectiveScenarioBase*, ObjectiveScenario);

