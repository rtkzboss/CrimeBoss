#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_MinigunnerSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_MinigunnerSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_MinigunnerSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWeakSpotExplosionDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpreadDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMinTimeTillOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxTimeTillOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInitialSpreadMultiplier();
    
};

