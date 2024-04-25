#pragma once
#include "CoreMinimal.h"
#include "OnMissionAddedDelegateDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionAddedDelegate, UMETA_BaseMission*, AddedMission);

