#include "IGS_MeshDeformationCorrection_AnimGraphNode.h"
#include "Animation/InputScaleBias.h"

FIGS_MeshDeformationCorrection_AnimGraphNode::FIGS_MeshDeformationCorrection_AnimGraphNode() {
    (*this).CorrectionData.Empty();
    (*this).Alphas.RotationAlphas.Empty();
    (*this).Alphas.LocationAlphas.Empty();
    (*this).Alphas.ScaleAlphas.Empty();
    (*this).UseExposedAlpha = false;
    (*this).m_CharacterMesh = nullptr;
}

