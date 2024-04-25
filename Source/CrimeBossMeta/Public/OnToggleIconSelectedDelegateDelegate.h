#pragma once
#include "CoreMinimal.h"
#include "OnToggleIconSelectedDelegateDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnToggleIconSelectedDelegate, bool, isIconSelected, UMETA_BaseMission*, MissionID);

