#include "IGS_MeshDeformationBoneAlphaInfo.h"

FIGS_MeshDeformationBoneAlphaInfo::FIGS_MeshDeformationBoneAlphaInfo() {
    auto& gen2056 = (*this).RotationAlphas;
    gen2056.Empty();
    auto& gen2057 = (*this).LocationAlphas;
    gen2057.Empty();
    auto& gen2058 = (*this).ScaleAlphas;
    gen2058.Empty();
}

