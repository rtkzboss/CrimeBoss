#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_ReactionsSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_ReactionsSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_ReactionsSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float NormalizedHealthMaxForReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetReactionsAlpha();
    
};

