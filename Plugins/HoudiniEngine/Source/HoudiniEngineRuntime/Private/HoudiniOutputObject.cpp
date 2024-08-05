#include "HoudiniOutputObject.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveType.h"

FHoudiniOutputObject::FHoudiniOutputObject() {
    (*this).OutputObject = nullptr;
    (*this).OutputComponent = nullptr;
    (*this).ProxyObject = nullptr;
    (*this).ProxyComponent = nullptr;
    (*this).bProxyIsCurrent = false;
    (*this).bIsImplicit = false;
    (*this).bIsGeometryCollectionPiece = false;
    (*this).GeometryCollectionPieceName = TEXT("");
    (*this).BakeName = TEXT("");
    (*this).CurveOutputProperty.CurveOutputType = EHoudiniCurveOutputType::HoudiniSpline;
    (*this).CurveOutputProperty.NumPoints = -1;
    (*this).CurveOutputProperty.bClosed = false;
    (*this).CurveOutputProperty.CurveType = EHoudiniCurveType::Invalid;
    (*this).CurveOutputProperty.CurveMethod = EHoudiniCurveMethod::Invalid;
}

