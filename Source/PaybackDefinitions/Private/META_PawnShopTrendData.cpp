#include "META_PawnShopTrendData.h"

FMETA_PawnShopTrendData::FMETA_PawnShopTrendData() {
    (*this).TrendDuration.Min = 0;
    (*this).TrendDuration.Max = 0;
    (*this).TrendCooldown.Min = 0;
    (*this).TrendCooldown.Max = 0;
    (*this).MaximumDailyChange.Min = 0;
    (*this).MaximumDailyChange.Max = 0;
    (*this).MaximumChangeForPositiveTrend = 0;
    (*this).MaximumChangeForNegativeTrend = 0;
}

