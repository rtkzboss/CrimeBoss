#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainManagerBaseComponent.h"
#include "IGS_Quickplay_ChainManagerComponent.generated.h"

class UMETA_Character;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_ChainManagerComponent : public UIGS_ChainManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_ChainManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionChainMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldUseChainCrew();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionChainMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UMETA_Character*> GetChainCharacters();
    
};

