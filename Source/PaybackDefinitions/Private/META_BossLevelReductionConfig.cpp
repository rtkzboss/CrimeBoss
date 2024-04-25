#include "META_BossLevelReductionConfig.h"

FMETA_BossLevelReductionConfig::FMETA_BossLevelReductionConfig() {
    this->MinBossLevelForReduction = 0;
    this->MinSuccessfulMissionsForNoReduction = 0;
    this->MinPlotlineProgressInPlotlineModeForNoReduction = 0.00f;
    this->MinReduction = 0.00f;
    this->ReductionCurve = NULL;
}

