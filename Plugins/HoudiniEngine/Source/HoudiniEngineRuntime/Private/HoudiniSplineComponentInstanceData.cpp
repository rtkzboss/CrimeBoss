#include "HoudiniSplineComponentInstanceData.h"
#include "ComponentInstanceDataCache.h"

FHoudiniSplineComponentInstanceData::FHoudiniSplineComponentInstanceData() {
    auto& gen1613 = (*this).CurvePoints;
    gen1613.Empty();
    auto& gen1614 = (*this).DisplayPoints;
    gen1614.Empty();
    auto& gen1615 = (*this).DisplayPointIndexDivider;
    gen1615.Empty();
}

