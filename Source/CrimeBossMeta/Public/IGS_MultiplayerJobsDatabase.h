#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "IGS_MultiplayerJobsDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_MultiplayerJobsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MultiplayerJobsDatabase();

    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetScenariosForJob(UObject* inWCO, const FGameplayTag inJobTag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetRandomScenarioForQJLobby(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MultiplayerJobCategoryRow GetMultiplayerJobCategory(UObject* inWCO, const FGameplayTag inMultiplayerJobCategoryID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_MultiplayerJobCategoryItemRow> GetJobsInCategory(UObject* inWCO, FGameplayTag inCategoryTag);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MultiplayerJobCategoryItemRow GetItemRow(UObject* inWCO, const FGameplayTag inItemRowID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_MultiplayerJobCategoryRow> GetAllCategories(UObject* inWCO);
    
};

