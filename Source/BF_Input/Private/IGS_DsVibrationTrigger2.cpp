#include "IGS_DsVibrationTrigger2.h"

FIGS_DsVibrationTrigger2::FIGS_DsVibrationTrigger2() {
    (*this).Frequency = 0;
    auto& gen0 = (*this).Amplitudes;
    gen0.Empty();
    gen0.AddDefaulted(10);
}

