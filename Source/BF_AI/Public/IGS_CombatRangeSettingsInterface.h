#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_CombatRangeSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_CombatRangeSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_CombatRangeSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCombatRangeMinRawValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCombatRangeMin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCombatRangeMaxRawValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCombatRangeMax();
    
};

