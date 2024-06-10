#include "HoudiniSplineComponentInstanceData.h"
#include "ComponentInstanceDataCache.h"

FHoudiniSplineComponentInstanceData::FHoudiniSplineComponentInstanceData() {
    (*this).CurvePoints.Empty();
    (*this).DisplayPoints.Empty();
    (*this).DisplayPointIndexDivider.Empty();
}

