#pragma once
#include "CoreMinimal.h"
#include "BroadcastFilterDelegate.generated.h"

class UIGS_NavLinkComponentBase;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBroadcastFilter, const UIGS_NavLinkComponentBase*, ThisComp, TArray<UObject*>&, NotifyList);

