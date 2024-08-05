#include "IGS_CachedBuildConfiguration.h"

FIGS_CachedBuildConfiguration::FIGS_CachedBuildConfiguration() {
    (*this).ConnectionPoints.Empty();
    (*this).Variants.Empty();
    (*this).Level = nullptr;
    (*this).Initialized = false;
}

