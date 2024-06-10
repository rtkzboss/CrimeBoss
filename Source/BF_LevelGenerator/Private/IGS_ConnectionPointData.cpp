#include "IGS_ConnectionPointData.h"

FIGS_ConnectionPointData::FIGS_ConnectionPointData() {
    (*this).Name = NAME_None;
    (*this).Location.X = 0.000000000e+00f;
    (*this).Location.Y = 0.000000000e+00f;
    (*this).Location.Z = 0.000000000e+00f;
    (*this).Rotation = 0.000000000e+00f;
}

