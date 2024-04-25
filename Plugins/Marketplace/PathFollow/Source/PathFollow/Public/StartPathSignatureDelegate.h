#pragma once
#include "CoreMinimal.h"
#include "StartPathSignatureDelegate.generated.h"

class UPFPathFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartPathSignature, UPFPathFollowerComponent*, FollowerComp);

