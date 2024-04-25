#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatusMaxHealthChangedEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusMaxHealthChangedEventSignature, float, MaxHealth, float, MaxShield);

