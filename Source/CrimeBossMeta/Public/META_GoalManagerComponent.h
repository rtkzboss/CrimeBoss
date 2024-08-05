#pragma once
#include "CoreMinimal.h"
#include "META_GoalSave.h"
#include "META_MoneyMakingGoalSave.h"
#include "EMETA_GoalStatus.h"
#include "META_FinishedGoal.h"
#include "META_GoalsObjectIDCounter.h"
#include "IGS_GoalManagerBaseComponent.h"
#include "META_TaskAddedOrRemovedDelegate.h"
#include "Templates/SubclassOf.h"
#include "META_GoalManagerComponent.generated.h"

class UMETA_BaseGoal;
class UMETA_MissionID;
class UMETA_MoneyMakingGoal;
class UMETA_StoryGoal;
class UMETA_TaskCondition;
class UObject;
class UStoryGraphManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_GoalManagerComponent : public UIGS_GoalManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseGoal*> CurrentGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> GoalsPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> BacklogGoalsPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_FinishedGoal> FinishedGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GoalsObjectIDCounter> GoalsRepeatCounters;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TaskAddedOrRemoved OnTaskAddedOrRemoved;
    
    UMETA_GoalManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryToAddFinishedTasksToGoalByGraph(const TSoftObjectPtr<UStoryGraphManager>& Graph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetGoalByGraph(UStoryGraphManager* Graph, EMETA_GoalStatus Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveRepeatGoal(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveJobFromGoal(TSubclassOf<UMETA_MissionID> JobID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoalTaskByGraph(TSoftObjectPtr<UStoryGraphManager> Graph, UMETA_TaskCondition* Task, bool bForceReset, bool& bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveGoalFromPool(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoalFromCurrentPool(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoalFromBacklogPool(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadTasksForMoneyMakingGoal(UMETA_MoneyMakingGoal* inGoal, UPARAM(Ref) FMETA_MoneyMakingGoalSave& inGoalSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsThereSuccessComplitedGoal(bool& bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetFinishedGoalsFromPool(TArray<FMETA_FinishedGoal>& outGoals);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_BaseGoal*> GetCurrentGoals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseGoal* GetCurrentGoalByID(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentGoalByGraph(TSoftObjectPtr<UStoryGraphManager> inGraph, UMETA_BaseGoal*& outGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateTasksForMoneyMakingGoal(UMETA_MoneyMakingGoal* inGoal, bool bFromSave);
    
protected:
    UFUNCTION(BlueprintCallable)
    FMETA_GoalSave ConvertGoalToSave(UMETA_StoryGoal* inGoal);
    
    UFUNCTION(BlueprintCallable)
    FMETA_FinishedGoal ConvertGoalObjectToFinishedGoal(UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable)
    UMETA_BaseGoal* ConvertGoalFromSave(const UObject* inWCO, UPARAM(Ref) FMETA_GoalSave& inGoal);
    
    UFUNCTION(BlueprintCallable)
    void ConvertCurrentGoalsToSave(TArray<FMETA_GoalSave>& outStoryGoalsSave, TArray<FMETA_MoneyMakingGoalSave>& outMoneyMakingGoalsSave);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_BaseGoal*> ConvertCurrentGoalsFromSave(const UObject* inWCO, TArray<FMETA_GoalSave> inCurrentGoals, TArray<FMETA_MoneyMakingGoalSave> inMoneyMakingGoals);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeRepeatGoalCounterByValue(TSubclassOf<UMETA_BaseGoal> inGoalID, int32 Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddRepeatGoal(FMETA_GoalsObjectIDCounter GoalCounterInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddJobToGoal(TSubclassOf<UMETA_BaseGoal> inGoalID, TSubclassOf<UMETA_MissionID> inJobID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGoalToPool(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToCurrentPool(UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToBacklogPool(TSubclassOf<UMETA_BaseGoal> inGoalID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddGoalTaskByGraph(TSoftObjectPtr<UStoryGraphManager> Graph, UMETA_TaskCondition* Task, bool& bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddFinishedGoalToPool(UMETA_BaseGoal* inGoal);
    
};

