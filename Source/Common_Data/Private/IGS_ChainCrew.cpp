#include "IGS_ChainCrew.h"

FIGS_ChainCrew::FIGS_ChainCrew() {
    (*this).ID = nullptr;
    (*this).Always.Empty();
    (*this).UniquePool.Empty();
    (*this).UniqueAmount = 0;
    (*this).GenericAmount = 0;
    (*this).GenericQuality = EMETA_ItemQuality::None;
}

