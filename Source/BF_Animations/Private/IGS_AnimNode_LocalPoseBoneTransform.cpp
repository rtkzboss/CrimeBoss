#include "IGS_AnimNode_LocalPoseBoneTransform.h"

FIGS_AnimNode_LocalPoseBoneTransform::FIGS_AnimNode_LocalPoseBoneTransform() {
    (*this).InputPose.LinkID = -1;
    (*this).Bone.BoneName = NAME_None;
    (*this).TransformPropertyName = TEXT("BoneTransform");
    (*this).m_CharacterMesh = nullptr;
    (*this).m_AnimInsatnce = nullptr;
}

