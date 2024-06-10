#include "IGS_LootBagInfo.h"

FIGS_LootBagInfo::FIGS_LootBagInfo() {
    (*this).Items.Empty();
    (*this).ItemIDs.Empty();
    (*this).CurrentCapacity = 0.000000000e+00f;
    (*this).IsOverfilled = false;
}

