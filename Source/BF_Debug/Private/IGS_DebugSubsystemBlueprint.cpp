#include "IGS_DebugSubsystemBlueprint.h"

UIGS_DebugSubsystemBlueprint::UIGS_DebugSubsystemBlueprint() {
    (*this).DebugMenuClass = nullptr;
    (*this).SWATClass = nullptr;
    (*this).HeisterClass = nullptr;
    (*this).DamageNumbersWidgetClass = nullptr;
    (*this).FearNumbersWidgetClass = nullptr;
    (*this).AmmoClassLarge = nullptr;
    (*this).AmmoClassSmall = nullptr;
    (*this).SpawnTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).SpawnMaxDistance = 1.000000000e+05f;
    (*this).SpawnMinChokePoints = 1;
    (*this).SpawnMaxChokePoints = 1;
}







