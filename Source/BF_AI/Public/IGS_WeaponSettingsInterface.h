#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_WeaponSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_WeaponSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_WeaponSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSwitchWeaponmagazineFired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSprayFireShotsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFireShotsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmmoToReload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAfterFireCooldownCover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAfterFireCooldown();
    
};

