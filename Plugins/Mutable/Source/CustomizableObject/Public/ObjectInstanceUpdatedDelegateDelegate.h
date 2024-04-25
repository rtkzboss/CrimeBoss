#pragma once
#include "CoreMinimal.h"
#include "ObjectInstanceUpdatedDelegateDelegate.generated.h"

class UCustomizableObjectInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectInstanceUpdatedDelegate, UCustomizableObjectInstance*, Instance);

