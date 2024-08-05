#pragma once
#include "CoreMinimal.h"
#include "IGS_FinancialBalanceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_FinancialBalanceChanged, int32, CurrentValue, int32, ChangedBy);

