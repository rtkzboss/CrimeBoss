#pragma once
#include "CoreMinimal.h"
#include "OnLinkCooldownStartedDelegate.generated.h"

class UIGS_NavLinkComponentBase;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLinkCooldownStarted, UIGS_NavLinkComponentBase*, inSmartLink, UObject*, inPathFollower);

