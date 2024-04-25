#pragma once
#include "CoreMinimal.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "UObject/Interface.h"
#include "IGS_ThrowableWeaponSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_ThrowableWeaponSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_ThrowableWeaponSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FIGS_AIThrowableWeaponDef> GetThrowableWeaponSettings();
    
};

