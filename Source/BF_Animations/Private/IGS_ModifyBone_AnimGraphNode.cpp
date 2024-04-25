#include "IGS_ModifyBone_AnimGraphNode.h"

FIGS_ModifyBone_AnimGraphNode::FIGS_ModifyBone_AnimGraphNode() {
    this->Translation_X_Alpha = 0.00f;
    this->Translation_Y_Alpha = 0.00f;
    this->Translation_Z_Alpha = 0.00f;
    this->Rotation_Yaw_Alpha = 0.00f;
    this->Rotation_Pitch_Alpha = 0.00f;
    this->Rotation_Roll_Alpha = 0.00f;
    this->TranslationSpace = BCS_WorldSpace;
    this->RotationSpace = BCS_WorldSpace;
    this->ScaleSpace = BCS_WorldSpace;
}

