#pragma once
#include "CoreMinimal.h"
#include "IGS_PanicStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PanicStateChangedSignature, bool, inState);

