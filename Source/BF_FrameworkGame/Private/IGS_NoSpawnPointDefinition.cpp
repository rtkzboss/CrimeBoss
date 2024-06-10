#include "IGS_NoSpawnPointDefinition.h"

FIGS_NoSpawnPointDefinition::FIGS_NoSpawnPointDefinition() {
    auto& gen2422 = (*this).PassengerSpawnDefinitions;
    gen2422.Empty();
    (*this).bIsFilled = false;
}

