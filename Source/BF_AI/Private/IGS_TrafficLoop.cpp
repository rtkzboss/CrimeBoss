#include "IGS_TrafficLoop.h"

FIGS_TrafficLoop::FIGS_TrafficLoop() {
    auto& gen2109 = (*this).Segments;
    gen2109.Empty();
    (*this).Lenght = 0.000000000e+00f;
}

