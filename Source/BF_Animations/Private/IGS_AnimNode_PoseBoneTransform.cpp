#include "IGS_AnimNode_PoseBoneTransform.h"
#include "Animation/InputScaleBias.h"

FIGS_AnimNode_PoseBoneTransform::FIGS_AnimNode_PoseBoneTransform() {
    (*this).Bone.BoneName = NAME_None;
    (*this).TransformPropertyName = TEXT("BoneTransform");
    (*this).m_CharacterMesh = nullptr;
    (*this).m_AnimInsatnce = nullptr;
}

