#include "IGS_ObjectiveManager.h"
#include "Net/UnrealNetwork.h"

UIGS_ObjectiveManager::UIGS_ObjectiveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowCustomObjective = false;
    this->bShowCustomObjectiveProgressBar = false;
    this->CurrentCustomObjectiveValue = 0;
    this->GoalCustomObjectiveValue = 0;
    this->ObjectiveFinishedAkEvent = NULL;
    this->ObjectiveAddedAkEvent = NULL;
}

void UIGS_ObjectiveManager::UnpauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask) {
}

void UIGS_ObjectiveManager::ShowCustomObjective(UObject* inWCO, bool inShow) {
}

void UIGS_ObjectiveManager::SetTaskState(UObject* inWCO, EIGS_ObjectiveState inState, FIGS_MissionTask inMissionTask) {
}

void UIGS_ObjectiveManager::SetTaskCountToComplete(UObject* inWCO, int32 inCountToComplete, FIGS_MissionTask inMissionTask) {
}

void UIGS_ObjectiveManager::SetObjectiveState(int32 inID, EIGS_ObjectiveState inState) {
}

void UIGS_ObjectiveManager::SetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent, EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange) {
}

void UIGS_ObjectiveManager::SetCustomObjectiveText(UObject* inWCO, FText InText) {
}

void UIGS_ObjectiveManager::SetCustomObjectiveShowProgressBar(UObject* inWCO, bool inShow) {
}

void UIGS_ObjectiveManager::SetCustomObjectiveGoalValue(UObject* inWCO, int32 InValue) {
}

void UIGS_ObjectiveManager::SetCustomObjectiveCurrentValue(UObject* inWCO, int32 InValue) {
}

void UIGS_ObjectiveManager::PauseTimerForTask(UObject* inWCO, FIGS_MissionTask inTask) {
}

void UIGS_ObjectiveManager::OnTimerPassed(int32 inID) {
}

void UIGS_ObjectiveManager::OnTaskValuesUpdated(int32 inID, EIGS_ObjectiveState inState) const {
}

void UIGS_ObjectiveManager::OnTaskStateUpdated(int32 inID, EIGS_ObjectiveState inState) {
}

void UIGS_ObjectiveManager::OnRep_Tasks(TArray<FIGS_MissionTask> inOldTasks) {
}

void UIGS_ObjectiveManager::OnRep_ShowCustomObjective() {
}

void UIGS_ObjectiveManager::OnRep_Objectives(TArray<FIGS_MissionObjective> inOldObjectives) {
}

void UIGS_ObjectiveManager::OnRep_CustomObjectiveValues() {
}

void UIGS_ObjectiveManager::OnRep_CustomObjectiveProgressBar() {
}

void UIGS_ObjectiveManager::OnRep_ActiveObjective(FIGS_MissionObjective inOldObjective) {
}

void UIGS_ObjectiveManager::OnOrTaskStateChanged(int32 inID, EIGS_ObjectiveState inState, int32 inOrTaskID, bool isA) {
}

void UIGS_ObjectiveManager::OnObjectiveStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}

void UIGS_ObjectiveManager::OnObjectiveComponentStateChanged(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange, UIGS_ObjectiveComponent* inComp) {
}

void UIGS_ObjectiveManager::OnCustomTaskStateChanged(EIGS_ObjectiveState inState, int32 inTaskID) {
}

void UIGS_ObjectiveManager::OnCharacterDied(AIGS_GameCharacterFramework* inCharacter, EIGS_UnregisterReason inReason) {
}

void UIGS_ObjectiveManager::OnActiveObjectiveChanged(int32 inID) const {
}

FIGS_MissionTask UIGS_ObjectiveManager::GetTaskCopyByID(UObject* inWCO, int32 inID, bool& outSuccess) {
    return FIGS_MissionTask{};
}

UIGS_ObjectiveManager* UIGS_ObjectiveManager::GetObjectiveManager(UObject* inWCO) {
    return NULL;
}

FIGS_MissionObjective UIGS_ObjectiveManager::GetObjectiveCopyByID(UObject* inWCO, int32 inID, bool& outSuccess) {
    return FIGS_MissionObjective{};
}

EIGS_ObjectiveState UIGS_ObjectiveManager::GetObjectiveComponentState(UIGS_ObjectiveComponent* InComponent) {
    return EIGS_ObjectiveState::Active;
}

UIGS_ObjectiveComponent* UIGS_ObjectiveManager::GetObjectiveComponent(EIGS_ObjectiveComponentType inType) {
    return NULL;
}

FIGS_MissionObjective UIGS_ObjectiveManager::GetActiveObjective(UObject* inWCO) {
    return FIGS_MissionObjective{};
}

void UIGS_ObjectiveManager::CreateTimerTask(UObject* inWCO, float inDuration, FText inTaskName, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct) {
}

void UIGS_ObjectiveManager::CreateTaskForSpecificObjectiveComponent(UObject* inWCO, UIGS_ObjectiveComponent* InComponent, FText inTaskName, bool bWatchWhenInactive, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct) {
}

void UIGS_ObjectiveManager::CreateTaskForObjectiveTypeWithCount(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration) {
}

void UIGS_ObjectiveManager::CreateTaskForObjectiveType(UObject* inWCO, EIGS_ObjectiveComponentType inType, FText inTaskName, bool bIncludeAll, bool bWatchWhenInactive, int32 inCountToFinish, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inDuration) {
}

void UIGS_ObjectiveManager::CreateSimpleObjective(UObject* inWCO, FText inObjectiveName, EIGS_ObjectiveComponentType inType, bool bWatchWhenInactive, bool bFinishWhenInactive, int32 inCountToComplete, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration) {
}

void UIGS_ObjectiveManager::CreateSimpleLootObjective(UObject* inWCO, FText inObjectiveName, int32 inValueToLoot, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, FIGS_MissionTask& outTaskStruct, bool& outSuccess, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration, bool bPocketLoot) {
}

void UIGS_ObjectiveManager::CreateOrTask(UObject* inWCO, FIGS_MissionTask inTaskA, FIGS_MissionTask inTaskB, FOnOrTaskStateChanged inDelegateHandle, FIGS_MissionTask& outTaskStruct) {
}

void UIGS_ObjectiveManager::CreateObjective(UObject* inWCO, FText inObjectiveName, TArray<FIGS_MissionTask> inMissionTasks, FOnObjectiveStateChanged inDelegateHandle, FIGS_MissionObjective& outObjectiveStruct, bool inSimpleObjective, bool inSimpleObjectiveWatchWhenInactive, bool inSimpleObjectFinishWhenInactive) {
}

void UIGS_ObjectiveManager::CreateLootTask(UObject* inWCO, FText inTaskName, float inGoalWeight, bool bCrucialTask, bool bOptionalTask, bool bPocketTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, EIGS_TaskTimerType inTaskTimerType, float inDuration) {
}

void UIGS_ObjectiveManager::CreateKillTask(UObject* inWCO, EIGS_TeamSideEnum inTeamSide, FText inTaskName, int32 inKillCount, bool bCrucialTask, bool bOptionalTask, FTaskChanged inDelegateHandle, FIGS_MissionTask& outObjectiveStruct, bool inWatchWhenInactive, EIGS_TaskTimerType inTaskTimerType, float inTimerDuration) {
}

void UIGS_ObjectiveManager::AddTaskToObjective(UObject* inWCO, FIGS_MissionTask inTaskStruct, FIGS_MissionObjective inObjective) {
}

void UIGS_ObjectiveManager::AddObjective(UObject* inWCO, FIGS_MissionObjective inObjectiveID) {
}

void UIGS_ObjectiveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ObjectiveManager, Tasks);
    DOREPLIFETIME(UIGS_ObjectiveManager, Objectives);
    DOREPLIFETIME(UIGS_ObjectiveManager, ActiveObjective);
    DOREPLIFETIME(UIGS_ObjectiveManager, bShowCustomObjective);
    DOREPLIFETIME(UIGS_ObjectiveManager, bShowCustomObjectiveProgressBar);
    DOREPLIFETIME(UIGS_ObjectiveManager, CustomObjectiveText);
    DOREPLIFETIME(UIGS_ObjectiveManager, CurrentCustomObjectiveValue);
    DOREPLIFETIME(UIGS_ObjectiveManager, GoalCustomObjectiveValue);
    DOREPLIFETIME(UIGS_ObjectiveManager, ObjectiveComponents);
}


