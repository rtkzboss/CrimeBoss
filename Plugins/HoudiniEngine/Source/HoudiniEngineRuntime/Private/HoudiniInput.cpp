#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput() {
    (*this).AssetNodeId = -1;
    (*this).InputNodeId = -1;
    (*this).ParmId = -1;
    (*this).KeepWorldTransform = EHoudiniXformType::Auto;
    (*this).bCookOnCurveChanged = true;
    auto& gen0 = (*this).GeometryInputObjects;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).bUseLegacyInputCurves = true;
    (*this).UnrealSplineResolution = 5.000000000e+01f;
    auto& gen1 = (*this).GeometryCollectionInputObjects;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*this).bCanDeleteHoudiniNodes = true;
}


