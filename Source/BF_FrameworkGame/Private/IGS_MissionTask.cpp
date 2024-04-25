#include "IGS_MissionTask.h"

FIGS_MissionTask::FIGS_MissionTask() {
    this->ID = 0;
    this->ObjectiveType = EIGS_TaskObjectiveType::None;
    this->ObjectiveState = EIGS_ObjectiveState::Active;
    this->bOptionalTask = false;
    this->bCrucialTask = false;
    this->bWatchWhenInactive = false;
    this->bInitialized = false;
    this->TimerType = EIGS_TaskTimerType::None;
    this->CountToComplete = 0;
    this->CurrentCompletedCount = 0;
}

