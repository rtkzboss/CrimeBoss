#include "IGS_AnimNode_PoseEffectorTarget.h"

FIGS_AnimNode_PoseEffectorTarget::FIGS_AnimNode_PoseEffectorTarget() {
    this->EffectorToGroundDistance = 0.00f;
    this->EffectorProjectionPrecision = 0.00f;
    this->FoootLocationToleranceFilter = 0.00f;
    this->m_CharacterMesh = NULL;
    this->m_FootIKAnimInstance = NULL;
    this->m_CharacterAniminstance = NULL;
}

