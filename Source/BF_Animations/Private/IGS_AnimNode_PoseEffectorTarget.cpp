#include "IGS_AnimNode_PoseEffectorTarget.h"
#include "Animation/InputScaleBias.h"

FIGS_AnimNode_PoseEffectorTarget::FIGS_AnimNode_PoseEffectorTarget() {
    (*this).EffectorTargers.Empty();
    (*this).RootBone.BoneName = NAME_None;
    (*this).EffectorToGroundDistance = 1.000000000e+01f;
    (*this).EffectorProjectionPrecision = 1.000000000e+00f;
    (*this).FoootLocationToleranceFilter = 1.000000000e+00f;
    (*this).m_CharacterMesh = nullptr;
    (*this).m_FootIKAnimInstance = nullptr;
    (*this).m_CharacterAniminstance = nullptr;
}

