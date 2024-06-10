#include "IGS_AnimNode_AimOffsetLookAt.h"
#include "Animation/AnimationAsset.h"

FIGS_AnimNode_AimOffsetLookAt::FIGS_AnimNode_AimOffsetLookAt() {
    (*this).BasePose.LinkID = -1;
    (*this).LODThreshold = -1;
    (*this).SourceSocketName = NAME_None;
    (*this).PivotSocketName = NAME_None;
    (*this).LookAtLocation.X = 0.000000000e+00f;
    (*this).LookAtLocation.Y = 0.000000000e+00f;
    (*this).LookAtLocation.Z = 1.000000000e+00f;
    (*this).SocketAxis.X = 1.000000000e+00f;
    (*this).SocketAxis.Y = 0.000000000e+00f;
    (*this).SocketAxis.Z = 0.000000000e+00f;
    (*this).Alpha = 1.000000000e+00f;
}

