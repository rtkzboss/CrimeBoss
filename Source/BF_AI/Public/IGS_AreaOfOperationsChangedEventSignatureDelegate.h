#pragma once
#include "CoreMinimal.h"
#include "IGS_AreaOfOperationsChangedEventSignatureDelegate.generated.h"

class AIGS_RoomBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AreaOfOperationsChangedEventSignature, TArray<AIGS_RoomBase*>&, AreaOfOperations);

