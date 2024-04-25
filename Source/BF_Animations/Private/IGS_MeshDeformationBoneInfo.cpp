#include "IGS_MeshDeformationBoneInfo.h"

FIGS_MeshDeformationBoneInfo::FIGS_MeshDeformationBoneInfo() {
    this->TargetBoneRotationAxis = BA_X;
    this->SourceBoneRotationAxis = EIGS_BoneAxis::BA_None;
    this->TargetBoneDebugRotationAlpha = 0.00f;
    this->TargetBoneLocationAxis = EIGS_LocationOrScaleBoneAxis::BA_None;
    this->TargetBoneDebugLocationAlpha = 0.00f;
    this->TargetBoneScaleAxis = EIGS_LocationOrScaleBoneAxis::BA_None;
    this->TargetBoneDebugScaleAlpha = 0.00f;
}

