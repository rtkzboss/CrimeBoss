#include "AkGeometryData.h"

FAkGeometryData::FAkGeometryData() {
    (*this).Vertices.Empty();
    (*this).Surfaces.Empty();
    (*this).Triangles.Empty();
    (*this).ToOverrideAcousticTexture.Empty();
    (*this).ToOverrideOcclusion.Empty();
}

