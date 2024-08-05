#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_SniperWeaponSettingsInterface.generated.h"

UINTERFACE()
class BF_AI_API UIGS_SniperWeaponSettingsInterface : public UIGS_WeaponSettingsInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_SniperWeaponSettingsInterface : public IIGS_WeaponSettingsInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EIGS_WeaponVisibilityType GetWeaponVisibilityType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSniperShouldHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHiddenTime();
    
};

