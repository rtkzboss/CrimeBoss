#include "HoudiniBrushInfo.h"

FHoudiniBrushInfo::FHoudiniBrushInfo() {
    (*this).BrushActor = nullptr;
    (*this).CachedTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).CachedOrigin.X = 0.000000000e+00f;
    (*this).CachedOrigin.Y = 0.000000000e+00f;
    (*this).CachedOrigin.Z = 0.000000000e+00f;
    (*this).CachedExtent.X = 0.000000000e+00f;
    (*this).CachedExtent.Y = 0.000000000e+00f;
    (*this).CachedExtent.Z = 0.000000000e+00f;
    (*this).CachedBrushType = Brush_Default;
    (*this).CachedSurfaceHash = 0;
}

