#pragma once
#include "CoreMinimal.h"
#include "EventPointReachedSignatureDelegate.generated.h"

class UObject;
class UPFPathFollowerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEventPointReachedSignature, UPFPathFollowerComponent*, FollowerComp, float, Distance, UObject*, ExtraData);

