#include "IGS_DsVibrationTrigger2.h"

FIGS_DsVibrationTrigger2::FIGS_DsVibrationTrigger2() {
    (*this).Frequency = 0;
    auto& gen2001 = (*this).Amplitudes;
    gen2001.Empty();
    gen2001.AddDefaulted(10);
}

