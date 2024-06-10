#include "AkGeometryData.h"

FAkGeometryData::FAkGeometryData() {
    auto& gen1201 = (*this).Vertices;
    gen1201.Empty();
    auto& gen1202 = (*this).Surfaces;
    gen1202.Empty();
    auto& gen1203 = (*this).Triangles;
    gen1203.Empty();
    auto& gen1204 = (*this).ToOverrideAcousticTexture;
    gen1204.Empty();
    auto& gen1205 = (*this).ToOverrideOcclusion;
    gen1205.Empty();
}

