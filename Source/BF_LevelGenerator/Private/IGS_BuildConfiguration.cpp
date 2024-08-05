#include "IGS_BuildConfiguration.h"

FIGS_BuildConfiguration::FIGS_BuildConfiguration() {
    (*this).Filters.Empty();
    (*this).BuildConfigurationDataAsset = nullptr;
    (*this).BuildConfigurationDataAsset_Holder = nullptr;
    (*this).VariantName = NAME_None;
    (*this).ConnectionName = NAME_None;
    (*this).CachedBuildConfiguration.ConnectionPoints.Empty();
    (*this).CachedBuildConfiguration.Variants.Empty();
    (*this).CachedBuildConfiguration.Level = nullptr;
    (*this).CachedBuildConfiguration.Initialized = false;
}

