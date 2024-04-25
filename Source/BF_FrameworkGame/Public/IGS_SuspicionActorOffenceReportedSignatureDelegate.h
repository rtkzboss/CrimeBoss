#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionActorOffenceReportedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SuspicionActorOffenceReportedSignature, AActor*, inReporter);

