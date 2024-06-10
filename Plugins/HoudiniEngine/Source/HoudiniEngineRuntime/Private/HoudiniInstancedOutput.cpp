#include "HoudiniInstancedOutput.h"

FHoudiniInstancedOutput::FHoudiniInstancedOutput() {
    (*this).OriginalObjectIndex = -1;
    auto& gen1603 = (*this).OriginalTransforms;
    gen1603.Empty();
    auto& gen1604 = (*this).VariationObjects;
    gen1604.Empty();
    auto& gen1605 = (*this).VariationTransformOffsets;
    gen1605.Empty();
    auto& gen1606 = (*this).TransformVariationIndices;
    gen1606.Empty();
    auto& gen1607 = (*this).OriginalInstanceIndices;
    gen1607.Empty();
    (*this).bChanged = false;
    (*this).bStale = false;
}

