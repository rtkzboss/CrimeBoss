#include "IGS_FIK_Crouching_Properties.h"

FIGS_FIK_Crouching_Properties::FIGS_FIK_Crouching_Properties() {
    (*this).LeftFoot_MaxRootBoneDistance = 3.000000000e+01f;
    (*this).LeftFoot_RootBoneOffsetAboveGround = 3.000000000e+01f;
    (*this).RightFoot_MaxRootBoneDistance = 1.000000000e+01f;
    (*this).RightFoot_RootBoneOffsetAboveGround = 1.000000000e+01f;
    (*this).MaxRootBoneOffsetWhileMoving = 1.000000015e-01f;
    (*this).MaxRootBoneOffsetWhileNotMoving = 1.000000000e+00f;
    (*this).MaxRootDistanceRange = 3.000000000e+01f;
}

