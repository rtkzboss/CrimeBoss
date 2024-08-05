#pragma once
#include "CoreMinimal.h"
#include "ReachedEndSignatureDelegate.generated.h"

class UPFPathFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedEndSignature, UPFPathFollowerComponent*, FollowerComp);

