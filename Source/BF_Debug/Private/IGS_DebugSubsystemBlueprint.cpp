#include "IGS_DebugSubsystemBlueprint.h"

UIGS_DebugSubsystemBlueprint::UIGS_DebugSubsystemBlueprint() {
    this->SpawnTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->SpawnMinDistance = 0.00f;
    this->SpawnMaxDistance = 100000.00f;
    this->SpawnMinChokePoints = 1;
    this->SpawnMaxChokePoints = 1;
    this->UseCustomMission = false;
    this->DebugMenu = NULL;
}







