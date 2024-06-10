#include "IGS_AnimNode_BoneInfoDebug.h"

FIGS_AnimNode_BoneInfoDebug::FIGS_AnimNode_BoneInfoDebug() {
    (*this).InputPose.LinkID = -1;
    auto& gen2009 = (*this).Bones;
    gen2009.Empty();
    (*this).DebugBoneAxisType = EIGS_DebugBoneAxisTypes::XYZ;
    (*this).DisplayBoneInfo = false;
    (*this).DisplayTransformSpace = EIGS_DebugBoneTextTransformSpaceFormat::WorldSpace;
    (*this).ArrowSize = 2.000000000e+01f;
    (*this).ArrowThickness = 2.500000000e-01f;
}

