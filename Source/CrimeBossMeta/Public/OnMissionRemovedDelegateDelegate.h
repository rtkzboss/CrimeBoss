#pragma once
#include "CoreMinimal.h"
#include "OnMissionRemovedDelegateDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionRemovedDelegate, UMETA_BaseMission*, RemovedMission);

