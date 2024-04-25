#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionActorNoticedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SuspicionActorNoticedSignature, AActor*, inNoticer);

