#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_MeleeWeaponActivationSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_MeleeWeaponActivationSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMeleeCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMeleeActivationDistance();
    
};

