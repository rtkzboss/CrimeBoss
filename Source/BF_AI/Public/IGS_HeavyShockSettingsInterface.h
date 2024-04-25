#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "IGS_HeavyShockSettingsInterface.generated.h"

class UGameplayEffect;

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_HeavyShockSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_HeavyShockSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> GetHeavyShockGameplayEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHeavyShockCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockConeAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockChargeTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHeavyShockActivationDistance();
    
};

