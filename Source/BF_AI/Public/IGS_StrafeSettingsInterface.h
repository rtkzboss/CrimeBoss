#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_StrafeSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_StrafeSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_StrafeSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStrafeLongDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetShortDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMinimumDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMediumDistance();
    
};

