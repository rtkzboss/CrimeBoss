#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MenuBackgroundConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class COMMON_DATA_API UIGS_MenuBackgroundConditionBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_MenuBackgroundConditionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateCondition(const UObject* inWCO);
    
};

