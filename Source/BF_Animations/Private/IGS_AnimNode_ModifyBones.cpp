#include "IGS_AnimNode_ModifyBones.h"
#include "Animation/InputScaleBias.h"

FIGS_AnimNode_ModifyBones::FIGS_AnimNode_ModifyBones() {
    auto& gen2010 = (*this).BonesToModify;
    gen2010.Empty();
    auto& gen2011 = (*this).BoneTransforms;
    gen2011.Empty();
}

