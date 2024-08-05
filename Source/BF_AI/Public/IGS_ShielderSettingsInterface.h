#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_ShielderSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_ShielderSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_ShielderSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetShielderWeakSpotHealth();
    
};

