#include "IGS_BuildConfiguration.h"

FIGS_BuildConfiguration::FIGS_BuildConfiguration() {
    auto& gen1981 = (*this).Filters;
    gen1981.Empty();
    (*this).BuildConfigurationDataAsset_Holder = nullptr;
    (*this).VariantName = NAME_None;
    (*this).ConnectionName = NAME_None;
    auto& gen1982 = (*this).CachedBuildConfiguration.ConnectionPoints;
    gen1982.Empty();
    auto& gen1983 = (*this).CachedBuildConfiguration.Variants;
    gen1983.Empty();
    (*this).CachedBuildConfiguration.Initialized = false;
}

