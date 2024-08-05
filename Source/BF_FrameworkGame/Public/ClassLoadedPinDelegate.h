#pragma once
#include "CoreMinimal.h"
#include "ClassLoadedPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClassLoadedPin, UClass*, Class);

