#include "IGS_AIDangerEvent.h"

FIGS_AIDangerEvent::FIGS_AIDangerEvent() {
    (*this).Radius = 0.000000000e+00f;
    (*this).Location.X = 0.000000000e+00f;
    (*this).Location.Y = 0.000000000e+00f;
    (*this).Location.Z = 0.000000000e+00f;
    (*this).DangerActor = nullptr;
    (*this).Tag = NAME_None;
}

