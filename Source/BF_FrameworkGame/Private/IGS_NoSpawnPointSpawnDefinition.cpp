#include "IGS_NoSpawnPointSpawnDefinition.h"

FIGS_NoSpawnPointSpawnDefinition::FIGS_NoSpawnPointSpawnDefinition() {
    this->TeamSide = EIGS_TeamSideEnum::TS_Heisters;
    this->UnitVariation = 0;
    this->UnitSpecialization = EIGS_UnitSpecialization::US_None;
    this->SettingsOverride = NULL;
}

