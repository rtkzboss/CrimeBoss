#pragma once
#include "CoreMinimal.h"
#include "ReachedStartSignatureDelegate.generated.h"

class UPFPathFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedStartSignature, UPFPathFollowerComponent*, FollowerComp);

