#include "IGS_AnimNode_BoneInfoDebug.h"

FIGS_AnimNode_BoneInfoDebug::FIGS_AnimNode_BoneInfoDebug() {
    this->DebugBoneAxisType = EIGS_DebugBoneAxisTypes::X;
    this->DisplayBoneInfo = false;
    this->DisplayTransformSpace = EIGS_DebugBoneTextTransformSpaceFormat::WorldSpace;
    this->ArrowSize = 0.00f;
    this->ArrowThickness = 0.00f;
}

