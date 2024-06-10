#include "HoudiniInstancedOutput.h"

FHoudiniInstancedOutput::FHoudiniInstancedOutput() {
    (*this).OriginalObject = nullptr;
    (*this).OriginalObjectIndex = -1;
    (*this).OriginalTransforms.Empty();
    (*this).VariationObjects.Empty();
    (*this).VariationTransformOffsets.Empty();
    (*this).TransformVariationIndices.Empty();
    (*this).OriginalInstanceIndices.Empty();
    (*this).bChanged = false;
    (*this).bStale = false;
}

