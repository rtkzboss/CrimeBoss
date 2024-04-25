#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "WeaponInterrutpReloadSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponInterrutpReloadSignature, EIGS_ReloadInterruptReasonEnum, Reason, bool, IsImmediate);

