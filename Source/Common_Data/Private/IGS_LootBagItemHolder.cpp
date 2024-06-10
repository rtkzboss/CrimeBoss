#include "IGS_LootBagItemHolder.h"

FIGS_LootBagItemHolder::FIGS_LootBagItemHolder() {
    (*this).Items.Empty();
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
}

