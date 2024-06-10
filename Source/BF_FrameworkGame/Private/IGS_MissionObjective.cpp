#include "IGS_MissionObjective.h"

FIGS_MissionObjective::FIGS_MissionObjective() {
    (*this).ID = -1;
    auto& gen3082 = (*this).TaskIDs;
    gen3082.Empty();
    (*this).ObjectiveState = EIGS_ObjectiveState::Active;
    (*this).ObjectiveName = FText::FromString(TEXT(""));
    (*this).bInitialized = false;
    (*this).bArchived = false;
    (*this).bSimpleObjective = false;
    (*this).bSimpleObjectiveWatchWhenInactive = false;
    (*this).bFinishWhenInactive = false;
}

