#pragma once
#include "CoreMinimal.h"
#include "IGS_LadderLeaveSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LadderLeaveSignature, bool, IsLeavingFromTop);

