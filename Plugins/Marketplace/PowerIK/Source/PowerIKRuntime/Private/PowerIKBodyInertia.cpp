#include "PowerIKBodyInertia.h"

FPowerIKBodyInertia::FPowerIKBodyInertia() {
    (*this).ApplyInertiaToBody = false;
    (*this).SmoothFactor = 5.000000000e+00f;
    (*this).UseSpring = false;
    (*this).SpringStrength = 1.000000000e+02f;
    (*this).SpringDamping = 2.000000030e-01f;
}

