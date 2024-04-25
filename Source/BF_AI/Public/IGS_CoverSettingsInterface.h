#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIGS_CoverPreset.h"
#include "IGS_CoverSettingsInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_CoverSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_CoverSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float NormalizedHealthMaxForCover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetUseCoverInCombatRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetUseAntiBunkering();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCoverStickiness();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EIGS_CoverPreset GetCoverPreset();
    
};

