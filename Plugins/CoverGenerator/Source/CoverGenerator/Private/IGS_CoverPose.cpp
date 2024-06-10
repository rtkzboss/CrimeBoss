#include "IGS_CoverPose.h"

FIGS_CoverPose::FIGS_CoverPose() {
    auto& gen1197 = (*this).ShootRanges;
    gen1197.Empty();
    gen1197.AddDefaulted(1);
    auto& gen1198 = (*this).LeftSideStepShootRanges;
    gen1198.Empty();
    gen1198.AddDefaulted(1);
    auto& gen1199 = (*this).RightSideStepShootRanges;
    gen1199.Empty();
    gen1199.AddDefaulted(1);
}

