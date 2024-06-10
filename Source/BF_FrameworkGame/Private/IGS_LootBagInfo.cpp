#include "IGS_LootBagInfo.h"

FIGS_LootBagInfo::FIGS_LootBagInfo() {
    auto& gen3080 = (*this).Items;
    gen3080.Empty();
    auto& gen3081 = (*this).ItemIDs;
    gen3081.Empty();
    (*this).CurrentCapacity = 0.000000000e+00f;
    (*this).IsOverfilled = false;
}

