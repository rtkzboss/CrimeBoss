#include "META_CareerStartStuff.h"

FMETA_CareerStartStuff::FMETA_CareerStartStuff() {
    (*this).StartDay = 1;
    (*this).Cash = 0;
    (*this).RespectLvl = EMETA_RespectLvl::Low;
    (*this).Weapons.Empty();
    (*this).Heisters.Empty();
    (*this).BalanceLimit.Min = 0;
    (*this).BalanceLimit.Max = 0;
}

