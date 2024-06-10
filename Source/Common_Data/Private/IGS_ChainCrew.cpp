#include "IGS_ChainCrew.h"

FIGS_ChainCrew::FIGS_ChainCrew() {
    (*this).ID = nullptr;
    auto& gen1855 = (*this).Always;
    gen1855.Empty();
    auto& gen1856 = (*this).UniquePool;
    gen1856.Empty();
    (*this).UniqueAmount = 0;
    (*this).GenericAmount = 0;
    (*this).GenericQuality = EMETA_ItemQuality::None;
}

