#include "META_BossLevelReductionConfig.h"

FMETA_BossLevelReductionConfig::FMETA_BossLevelReductionConfig() {
    (*this).MinBossLevelForReduction = 1;
    (*this).MinSuccessfulMissionsForNoReduction = 0;
    (*this).MinPlotlineProgressInPlotlineModeForNoReduction = 0.000000000e+00f;
    (*this).MinReduction = 0.000000000e+00f;
    (*this).ReductionCurve = nullptr;
}

