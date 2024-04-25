#include "IGS_MissionObjective.h"

FIGS_MissionObjective::FIGS_MissionObjective() {
    this->ID = 0;
    this->ObjectiveState = EIGS_ObjectiveState::Active;
    this->bInitialized = false;
    this->bArchived = false;
    this->bSimpleObjective = false;
    this->bSimpleObjectiveWatchWhenInactive = false;
    this->bFinishWhenInactive = false;
}

