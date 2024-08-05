#pragma once
#include "CoreMinimal.h"
#include "IGS_GeneralListenerRegisteredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GeneralListenerRegistered, AActor*, inGeneralListener);

