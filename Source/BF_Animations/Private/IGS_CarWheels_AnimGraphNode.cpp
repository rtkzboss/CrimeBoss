#include "IGS_CarWheels_AnimGraphNode.h"
#include "Animation/InputScaleBias.h"

FIGS_CarWheels_AnimGraphNode::FIGS_CarWheels_AnimGraphNode() {
    (*this).Wheels.Empty();
    (*this).SuspenssionRoot.BoneName = NAME_None;
    (*this).WheelsRadius = 3.300000000e+01f;
    (*this).FrontWheelsAngle = 0.000000000e+00f;
    (*this).WheelsSpeed = 0.000000000e+00f;
    (*this).ChassisSideRotation = 0.000000000e+00f;
    (*this).WheelSpacing = 8.250000000e+01f;
    (*this).m_SkeletalMesh = nullptr;
}

