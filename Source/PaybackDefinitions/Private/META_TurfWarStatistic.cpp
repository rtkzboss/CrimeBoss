#include "META_TurfWarStatistic.h"

FMETA_TurfWarStatistic::FMETA_TurfWarStatistic() {
    auto& gen1716 = (*this).TurfsAcquiredAsIsolated;
    gen1716.Empty();
    (*this).RecruitedTurfWarSoldiers = 0;
    (*this).LostTurfWarSoldiers = 0;
    (*this).DetectivesNeutralized = 0;
    auto& gen1717 = (*this).BossesEliminated;
    gen1717.Empty();
}

