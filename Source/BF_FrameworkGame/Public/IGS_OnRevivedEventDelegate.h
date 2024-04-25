#pragma once
#include "CoreMinimal.h"
#include "IGS_OnRevivedEventDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnRevivedEvent, APawn*, inHealer);

