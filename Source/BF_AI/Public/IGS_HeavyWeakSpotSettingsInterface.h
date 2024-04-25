#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_HeavyWeakSpotSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_HeavyWeakSpotSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_HeavyWeakSpotSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyWeakSpotHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyWeakSpotDoomTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyInjuredTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyHealthToInjured();
    
};

