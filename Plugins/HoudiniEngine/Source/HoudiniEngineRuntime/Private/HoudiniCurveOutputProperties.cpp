#include "HoudiniCurveOutputProperties.h"

FHoudiniCurveOutputProperties::FHoudiniCurveOutputProperties() {
    (*this).CurveOutputType = EHoudiniCurveOutputType::HoudiniSpline;
    (*this).NumPoints = -1;
    (*this).bClosed = false;
    (*this).CurveType = EHoudiniCurveType::Invalid;
    (*this).CurveMethod = EHoudiniCurveMethod::Invalid;
}

