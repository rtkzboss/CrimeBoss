#include "IGS_SpecialLoot.h"

FIGS_SpecialLoot::FIGS_SpecialLoot() {
    auto& gen1840 = (*this).Loot;
    gen1840.Empty();
    (*this).Money = 0;
    (*this).bIsFilled = false;
}

