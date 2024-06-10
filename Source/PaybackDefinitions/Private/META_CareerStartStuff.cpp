#include "META_CareerStartStuff.h"

FMETA_CareerStartStuff::FMETA_CareerStartStuff() {
    (*this).StartDay = 1;
    (*this).Cash = 0;
    (*this).RespectLvl = EMETA_RespectLvl::Low;
    auto& gen1703 = (*this).Weapons;
    gen1703.Empty();
    auto& gen1704 = (*this).Heisters;
    gen1704.Empty();
    (*this).BalanceLimit.Min = 0;
    (*this).BalanceLimit.Max = 0;
}

