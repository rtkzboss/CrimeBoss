#include "IGS_LootBagItemHolder.h"

FIGS_LootBagItemHolder::FIGS_LootBagItemHolder() {
    auto& gen1885 = (*this).Items;
    gen1885.Empty();
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
}

