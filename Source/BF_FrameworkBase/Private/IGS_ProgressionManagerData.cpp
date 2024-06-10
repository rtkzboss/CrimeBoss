#include "IGS_ProgressionManagerData.h"

UIGS_ProgressionManagerData::UIGS_ProgressionManagerData() {
    (*this).InitialLevel = 1;
    (*this).LevelUpCount = 1;
    (*this).ProgressionCurveTable = nullptr;
    (*this).MissionNotSupportingStars = 1.500000000e+01f;
    (*this).WithHumanPlayers = 5.000000000e+00f;
}


