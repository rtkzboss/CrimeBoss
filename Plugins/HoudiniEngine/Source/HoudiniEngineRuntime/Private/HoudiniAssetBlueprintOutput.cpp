#include "HoudiniAssetBlueprintOutput.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveType.h"

FHoudiniAssetBlueprintOutput::FHoudiniAssetBlueprintOutput() {
    (*this).OutputIndex = -1;
    (*this).OutputObject.OutputObject = nullptr;
    (*this).OutputObject.OutputComponent = nullptr;
    (*this).OutputObject.ProxyObject = nullptr;
    (*this).OutputObject.ProxyComponent = nullptr;
    (*this).OutputObject.bProxyIsCurrent = false;
    (*this).OutputObject.bIsImplicit = false;
    (*this).OutputObject.bIsGeometryCollectionPiece = false;
    (*this).OutputObject.GeometryCollectionPieceName = TEXT("");
    (*this).OutputObject.BakeName = TEXT("");
    (*this).OutputObject.CurveOutputProperty.CurveOutputType = EHoudiniCurveOutputType::HoudiniSpline;
    (*this).OutputObject.CurveOutputProperty.NumPoints = -1;
    (*this).OutputObject.CurveOutputProperty.bClosed = false;
    (*this).OutputObject.CurveOutputProperty.CurveType = EHoudiniCurveType::Invalid;
    (*this).OutputObject.CurveOutputProperty.CurveMethod = EHoudiniCurveMethod::Invalid;
}

