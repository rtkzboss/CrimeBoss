#include "IGS_AggroHolder.h"

FIGS_AggroHolder::FIGS_AggroHolder() {
    (*this).TotalDamage = 0.000000000e+00f;
    (*this).LastDamage = 0.000000000e+00f;
    (*this).Distance = 0.000000000e+00f;
    (*this).NormalizedDistance = 0.000000000e+00f;
    (*this).GlobalAggro = 0.000000000e+00f;
    (*this).IsClose = false;
}

