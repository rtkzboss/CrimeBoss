#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_HubGeneratorPresetRow.h"
#include "HUBPresetsDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UHUBPresetsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHUBPresetsDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_HubGeneratorPresetRow GetHUBPresetsDataBP(const UObject* inWCO, FGameplayTag inGameplayTag, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_HubGeneratorPresetRow> GetAllHUBPresetsDataBP(const UObject* inWCO);
    
};

