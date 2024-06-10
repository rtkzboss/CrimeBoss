#include "IGS_NoSpawnPointSpawnDefinition.h"

FIGS_NoSpawnPointSpawnDefinition::FIGS_NoSpawnPointSpawnDefinition() {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).UnitVariation = 0;
    (*this).UnitSpecialization = EIGS_UnitSpecialization::US_None;
    (*this).SettingsOverride = nullptr;
    (*this).Transform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}

