#include "IGS_FAnimNode_BoneSpring.h"

FIGS_FAnimNode_BoneSpring::FIGS_FAnimNode_BoneSpring() {
    this->bLimitDisplacement = false;
    this->MaxDisplacement = 0.00f;
    this->SpringStiffness = 0.00f;
    this->SpringDamping = 0.00f;
    this->ErrorResetThresh = 0.00f;
    this->bNoZSpring = false;
    this->bTranslateX = false;
    this->bTranslateY = false;
    this->bTranslateZ = false;
    this->bRotateX = false;
    this->bRotateY = false;
    this->bRotateZ = false;
}

