#include "IGS_FAnimNode_BoneSpring.h"
#include "Animation/InputScaleBias.h"

FIGS_FAnimNode_BoneSpring::FIGS_FAnimNode_BoneSpring() {
    (*this).SpringBone.BoneName = NAME_None;
    (*this).bLimitDisplacement = false;
    (*this).MaxDisplacement = 0.000000000e+00f;
    (*this).SpringStiffness = 5.000000000e+01f;
    (*this).SpringDamping = 4.000000000e+00f;
    (*this).ErrorResetThresh = 2.560000000e+02f;
    (*this).bNoZSpring_DEPRECATED = false;
    (*this).bTranslateX = true;
    (*this).bTranslateY = true;
    (*this).bTranslateZ = true;
    (*this).bRotateX = false;
    (*this).bRotateY = false;
    (*this).bRotateZ = false;
}

