#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_EventManagerBaseComponent.generated.h"

class UStoryGraphManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_EventManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_EventManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetGraphVariableValue(FGameplayTag inVarName, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetGraphVariables();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, int32& OutValue, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DEBUG_StartPlotline(const TSoftObjectPtr<UStoryGraphManager>& inPlotline, FGameplayTag inGameplayTag, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSoftObjectPtr<UStoryGraphManager>> DEBUG_GetPlotlines();
    
};

