#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterNumberChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HeisterNumberChanged, int32, HeisterNumber);

