#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_GoalType.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "META_GoalTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_GoalDatabase.generated.h"

class UMETA_BaseGoal;
class UObject;
class UStoryGraphManager;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_GoalDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_GoalDatabase();

    UFUNCTION(BlueprintCallable)
    void GetPreparedGoalData(UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inClass, bool& outSucceeded, bool& outUseLockRespectCondition, EMETA_RespectLvl& outUnlockRespect, EMETA_RespectLvl& outLockRespect, EMETA_Partner& outInstigatorPartner);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_GoalTableRow> GetMoneyMakingGoalsForPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UMETA_BaseGoal>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    EMETA_GoalType GetGoalType(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    UMETA_BaseGoal* GetGoalObject(const UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    static void GetGoalIDByGraph(UObject* inWCO, TSoftObjectPtr<UStoryGraphManager> inGraph, bool& outSucceeded, TSubclassOf<UMETA_BaseGoal>& outClass);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_GoalTableRow GetGoalData(UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_GoalTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_GoalTableRow> GetDatabaseTableBP();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_BaseGoal>> GetDatabaseIDs();
    
};

