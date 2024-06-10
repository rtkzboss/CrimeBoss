#include "IGS_AnimNode_PhysicalAnimation.h"

FIGS_AnimNode_PhysicalAnimation::FIGS_AnimNode_PhysicalAnimation() {
    (*this).InputPose.LinkID = -1;
    (*this).RelativeRotation.Pitch = 0.000000000e+00f;
    (*this).RelativeRotation.Yaw = 0.000000000e+00f;
    (*this).RelativeRotation.Roll = 0.000000000e+00f;
    (*this).AnimationRotationWeight = 1.000000000e+00f;
    (*this).MaxLinearVelocity = 5.000000000e+02f;
    (*this).RagdollCurveValue = 0.000000000e+00f;
    (*this).EnableGravityCurveTreshold = 1.000000015e-01f;
}

