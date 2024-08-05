#include "IGS_AnimNode_ModifyBones.h"
#include "Animation/InputScaleBias.h"

FIGS_AnimNode_ModifyBones::FIGS_AnimNode_ModifyBones() {
    (*this).BonesToModify.Empty();
    (*this).BoneTransforms.Empty();
}

