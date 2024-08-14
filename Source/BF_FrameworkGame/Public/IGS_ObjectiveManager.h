#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CleanExecutionState.h"
#include "EIGS_ObjectiveComponentType.h"
#include "EIGS_ObjectiveState.h"
#include "EIGS_TaskTimerType.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnregisterReason.h"
#include "IGS_MissionObjective.h"
#include "IGS_MissionTask.h"
#include "IGS_OnCleanExecutionStateChangedDelegate.h"
#include "IGS_OnCustomObjectiveEnabledDelegate.h"
#include "IGS_OnCustomObjectiveValuesChangedDelegate.h"
#include "ObjectiveAddedDelegate.h"
#include "OnActiveObjectiveChangedEventDelegate.h"
#include "OnObjectiveStateChangedDelegate.h"
#include "OnOrTaskStateChangedDelegate.h"
#include "TaskChangedDelegate.h"
#include "IGS_ObjectiveManager.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_ObjectiveComponent;
class UIGS_ObjectiveManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ObjectiveManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Tasks, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MissionTask> Tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Objectives, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MissionObjective> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveObjective, meta=(AllowPrivateAccess=true))
    FIGS_MissionObjective ActiveObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShowCustomObjective, meta=(AllowPrivateAccess=true))
    bool bShowCustomObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomObjectiveProgressBar, meta=(AllowPrivateAccess=true))
    bool bShowCustomObjectiveProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomObjectiveValues, meta=(AllowPrivateAccess=true))
    FText CustomObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomObjectiveValues, meta=(AllowPrivateAccess=true))
    int32 CurrentCustomObjectiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomObjectiveValues, meta=(AllowPrivateAccess=true))
    int32 GoalCustomObjectiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CleanExecutionState, meta=(AllowPrivateAccess=true))
    EIGS_CleanExecutionState CleanExecutionState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCustomObjectiveEnabled OnCustomObjectiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCustomObjectiveValuesChanged OnCustomObjectiveValuesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCleanExecutionStateChanged OnCleanExecutionStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAdded OnActiveObjectiveChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveObjectiveChangedEvent OnActiveObjectiveChangedEventBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAdded OnObjectiveAddedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveAdded OnObjectiveStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskChanged OnTaskStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ObjectiveFinishedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ObjectiveAddedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIGS_ObjectiveComponent*> ObjectiveComponents;
    
    UIGS_ObjectiveManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void UnpauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask);
    
    UFUNCTION(BlueprintCallable)
    static void ShowCustomObjective(UObject* inWCO, bool inShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetTaskState(UObject* inWCO, EIGS_ObjectiveState inState, FIGS_MissionTask inMissionTask);
    
    UFUNCTION(BlueprintCallable)
    static void SetTaskCountToComplete(UObject* inWCO, int32 inCountToComplete, FIGS_MissionTask inMissionTask);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveState(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent, EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomObjectiveText(UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomObjectiveShowProgressBar(UObject* inWCO, bool inShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomObjectiveGoalValue(UObject* inWCO, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomObjectiveCurrentValue(UObject* inWCO, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCleanExecutionState(EIGS_CleanExecutionState inState);
    
    UFUNCTION(BlueprintCallable)
    static void PauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerPassed(int32 inID);
    
    UFUNCTION(BlueprintCallable)
    void OnTaskValuesUpdated(int32 inID, EIGS_ObjectiveState inState) const;
    
    UFUNCTION(BlueprintCallable)
    void OnTaskStateUpdated(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tasks(TArray<FIGS_MissionTask> inOldTasks);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowCustomObjective();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Objectives(TArray<FIGS_MissionObjective> inOldObjectives);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomObjectiveValues();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomObjectiveProgressBar();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CleanExecutionState(EIGS_CleanExecutionState inOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveObjective(FIGS_MissionObjective inOldObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnOrTaskStateChanged(int32 inID, EIGS_ObjectiveState inState, int32 inOrTaskID, bool isA);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStateChanged(int32 inID, EIGS_ObjectiveState inState);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveComponentStateChanged(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange, UIGS_ObjectiveComponent* inComp);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomTaskStateChanged(EIGS_ObjectiveState inState, int32 inTaskID);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(AIGS_GameCharacterFramework* inCharacter, EIGS_UnregisterReason inReason);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveObjectiveChanged(int32 inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MissionTask GetTaskCopyByID(UObject* inWCO, int32 inID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_ObjectiveManager* GetObjectiveManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MissionObjective GetObjectiveCopyByID(UObject* inWCO, int32 inID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_ObjectiveState GetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    UIGS_ObjectiveComponent* GetObjectiveComponent(EIGS_ObjectiveComponentType inType);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MissionObjective GetActiveObjective(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTimerTask(UObject* inWCO, float inDuration, FText inTaskName, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTaskForSpecificObjectiveComponent(UObject* inWCO, UIGS_ObjectiveComponent* InComponent, FText inTaskName, bool bWatchWhenInactive, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTaskForObjectiveTypeWithCount(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTaskForObjectiveType(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSimpleObjective(UObject* inWCO, FText inObjectiveName, EIGS_ObjectiveComponentType inType, bool bWatchWhenInactive, bool bFinishWhenInactive, int32 inCountToComplete, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSimpleLootObjective(UObject* inWCO, FText inObjectiveName, int32 inValueToLoot, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration, bool bPocketLoot);
    
    UFUNCTION(BlueprintCallable)
    static void CreateOrTask(UObject* inWCO, FIGS_MissionTask inTaskA, FIGS_MissionTask inTaskB, FOnOrTaskStateChanged inDelegateHandle, FIGS_MissionTask& outTaskStruct);
    
    UFUNCTION(BlueprintCallable)
    static void CreateObjective(UObject* inWCO, FText inObjectiveName, TArray<FIGS_MissionTask> inMissionTasks, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, bool inSimpleObjective, bool inSimpleObjectiveWatchWhenInactive, bool inSimpleObjectFinishWhenInactive);
    
    UFUNCTION(BlueprintCallable)
    static void CreateLootTask(UObject* inWCO, FText inTaskName, float inGoalWeight, bool bCrucialTask, bool bOptionalTask, bool bPocketTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, EIGS_TaskTimerType inTaskTimerType, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    static void CreateKillTask(UObject* inWCO, EIGS_TeamSideEnum inTeamSide, FText inTaskName, int32 inKillCount, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool inWatchWhenInactive, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration);
    
    UFUNCTION(BlueprintCallable)
    static void AddTaskToObjective(UObject* inWCO, FIGS_MissionTask inTaskStruct, FIGS_MissionObjective inObjective);
    
    UFUNCTION(BlueprintCallable)
    static void AddObjective(UObject* inWCO, FIGS_MissionObjective inObjectiveID);
    
};

