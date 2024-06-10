#include "IGS_ModifyBone_AnimGraphNode.h"
#include "Animation/InputScaleBias.h"

FIGS_ModifyBone_AnimGraphNode::FIGS_ModifyBone_AnimGraphNode() {
    (*this).BoneToModify.BoneName = NAME_None;
    (*this).Translation.X = 0.000000000e+00f;
    (*this).Translation.Y = 0.000000000e+00f;
    (*this).Translation.Z = 0.000000000e+00f;
    (*this).Rotation.Pitch = 0.000000000e+00f;
    (*this).Rotation.Yaw = 0.000000000e+00f;
    (*this).Rotation.Roll = 0.000000000e+00f;
    (*this).Scale.X = 0.000000000e+00f;
    (*this).Scale.Y = 0.000000000e+00f;
    (*this).Scale.Z = 0.000000000e+00f;
    (*this).Translation_X_Alpha = 0.000000000e+00f;
    (*this).Translation_Y_Alpha = 0.000000000e+00f;
    (*this).Translation_Z_Alpha = 0.000000000e+00f;
    (*this).Rotation_Yaw_Alpha = 0.000000000e+00f;
    (*this).Rotation_Pitch_Alpha = 0.000000000e+00f;
    (*this).Rotation_Roll_Alpha = 0.000000000e+00f;
    (*this).TranslationSpace = BCS_WorldSpace;
    (*this).RotationSpace = BCS_WorldSpace;
    (*this).ScaleSpace = BCS_WorldSpace;
}

