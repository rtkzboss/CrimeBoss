#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlatformServerConnectionStatus.h"
#include "IGS_OnConnectionStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnConnectionStatusChanged, EIGS_PlatformServerConnectionStatus, ConnectionStatus);

