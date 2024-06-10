#include "IGS_CoverPose.h"

FIGS_CoverPose::FIGS_CoverPose() {
    auto& gen0 = (*this).ShootRanges;
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*this).LeftSideStepShootRanges;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).RightSideStepShootRanges;
    gen2.Empty();
    gen2.AddDefaulted(1);
}

