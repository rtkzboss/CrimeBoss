#include "IGS_AIBaseDetectiveTierData.h"

FIGS_AIBaseDetectiveTierData::FIGS_AIBaseDetectiveTierData() {
    (*this).ReviveTimer.Min = 2.000000000e+01f;
    (*this).ReviveTimer.Max = 3.000000000e+01f;
    (*this).DownstateHealth = 2.000000000e+03f;
    (*this).RevivesToRetreat = 3;
    (*this).MaxHealthForReaction = 1.000000000e+00f;
    (*this).MaxHealthForCover = 1.000000000e+00f;
}

