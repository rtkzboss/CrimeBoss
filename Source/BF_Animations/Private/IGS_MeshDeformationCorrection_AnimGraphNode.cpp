#include "IGS_MeshDeformationCorrection_AnimGraphNode.h"
#include "Animation/InputScaleBias.h"

FIGS_MeshDeformationCorrection_AnimGraphNode::FIGS_MeshDeformationCorrection_AnimGraphNode() {
    auto& gen2052 = (*this).CorrectionData;
    gen2052.Empty();
    auto& gen2053 = (*this).Alphas.RotationAlphas;
    gen2053.Empty();
    auto& gen2054 = (*this).Alphas.LocationAlphas;
    gen2054.Empty();
    auto& gen2055 = (*this).Alphas.ScaleAlphas;
    gen2055.Empty();
    (*this).UseExposedAlpha = false;
    (*this).m_CharacterMesh = nullptr;
}

