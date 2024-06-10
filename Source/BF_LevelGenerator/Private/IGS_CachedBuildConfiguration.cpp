#include "IGS_CachedBuildConfiguration.h"

FIGS_CachedBuildConfiguration::FIGS_CachedBuildConfiguration() {
    auto& gen1984 = (*this).ConnectionPoints;
    gen1984.Empty();
    auto& gen1985 = (*this).Variants;
    gen1985.Empty();
    (*this).Initialized = false;
}

