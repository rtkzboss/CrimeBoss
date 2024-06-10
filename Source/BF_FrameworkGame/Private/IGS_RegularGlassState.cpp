#include "IGS_RegularGlassState.h"

FIGS_RegularGlassState::FIGS_RegularGlassState() {
    (*this).RelativeHoleLocation.X = 0.000000000e+00f;
    (*this).RelativeHoleLocation.Y = 0.000000000e+00f;
    (*this).RelativeHoleLocation.Z = 0.000000000e+00f;
    (*this).UVOffset.X = 0.000000000e+00f;
    (*this).UVOffset.Y = 0.000000000e+00f;
    (*this).UVOffset.Z = 0.000000000e+00f;
    (*this).bIsBroken = false;
    auto& gen3078 = (*this).BrokenGlassShards;
    gen3078.Empty();
}

