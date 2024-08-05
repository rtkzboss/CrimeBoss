#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_DetectiveSettingsInterface.generated.h"

class UGameplayEffect;

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_DetectiveSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_DetectiveSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetReviveTimeMin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetReviveTimeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetReviveCharges();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHealthMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGameplayEffect* GetGameplayEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDownstateHealth();
    
};

