#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput() {
    (*this).AssetNodeId = -1;
    (*this).InputNodeId = -1;
    (*this).ParmId = -1;
    (*this).KeepWorldTransform = EHoudiniXformType::Auto;
    (*this).bCookOnCurveChanged = true;
    auto& gen197 = (*this).GeometryInputObjects;
    gen197.Empty();
    gen197.AddDefaulted(1);
    (*this).bUseLegacyInputCurves = true;
    (*this).UnrealSplineResolution = 5.000000000e+01f;
    auto& gen198 = (*this).GeometryCollectionInputObjects;
    gen198.Empty();
    gen198.AddDefaulted(1);
    (*this).bCanDeleteHoudiniNodes = true;
}


