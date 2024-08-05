#include "IGS_MissionTask.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ObjectiveComponentType.h"
#include "EIGS_TeamSideEnum.h"

FIGS_MissionTask::FIGS_MissionTask() {
    (*this).ID = 0;
    (*this).ObjectiveType = EIGS_TaskObjectiveType::None;
    (*this).ObjectiveState = EIGS_ObjectiveState::Active;
    (*this).TaskName = FText::FromString(TEXT(""));
    (*this).bOptionalTask = false;
    (*this).bCrucialTask = false;
    (*this).bWatchWhenInactive = false;
    (*this).bInitialized = false;
    (*this).TimerType = EIGS_TaskTimerType::None;
    (*this).CountToComplete = 1;
    (*this).CurrentCompletedCount = 0;
    (*this).CustomTaskInfo.ObjectiveCompType = EIGS_ObjectiveComponentType::Default;
    (*this).LootTaskInfo.bPocketTask = false;
    (*this).KillTaskInfo.TrackedTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).OrTaskInfo.TaskA_ID = 0;
    (*this).OrTaskInfo.TaskB_ID = 0;
    (*this).TimerTaskInfo.StartTimestamp = 0.000000000e+00f;
    (*this).TimerTaskInfo.Duration = 0.000000000e+00f;
    (*this).TimerTaskInfo.bPaused = false;
    (*TBaseStructure<FTimerHandle>::Get()->FindPropertyByName("Handle")->ContainerPtrToValuePtr<uint64>(&(*this).TimerTaskInfo.TimerTaskHandle, 0)) = 0;
}

