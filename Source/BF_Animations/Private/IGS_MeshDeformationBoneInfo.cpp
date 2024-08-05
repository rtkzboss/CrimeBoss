#include "IGS_MeshDeformationBoneInfo.h"

FIGS_MeshDeformationBoneInfo::FIGS_MeshDeformationBoneInfo() {
    (*this).TargetBone.BoneName = NAME_None;
    (*this).SourceBone.BoneName = NAME_None;
    (*this).TargetBoneRotationAxis = BA_X;
    (*this).SourceBoneRotationAxis = EIGS_BoneAxis::BA_None;
    (*this).TargetRotationOffset.Pitch = 0.000000000e+00f;
    (*this).TargetRotationOffset.Yaw = 0.000000000e+00f;
    (*this).TargetRotationOffset.Roll = 0.000000000e+00f;
    (*this).TargetBoneDebugRotationAlpha = 1.000000000e+00f;
    (*this).TargetBoneLocationAxis = EIGS_LocationOrScaleBoneAxis::BA_None;
    (*this).TargetBoneDebugLocationAlpha = 1.000000000e+00f;
    (*this).TargetBoneScaleAxis = EIGS_LocationOrScaleBoneAxis::BA_None;
    (*this).TargetBoneDebugScaleAlpha = 1.000000000e+00f;
}

