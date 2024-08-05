#include "META_PawnShopTrendDataRuntime.h"

FMETA_PawnShopTrendDataRuntime::FMETA_PawnShopTrendDataRuntime() {
    (*this).bIsPositive = true;
    (*this).CurrentTrendDuration = 0;
    (*this).CurrentTrendCooldown = 0;
    (*this).CurrentPriceChange = 0;
}

