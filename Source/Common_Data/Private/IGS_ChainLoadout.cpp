#include "IGS_ChainLoadout.h"

FIGS_ChainLoadout::FIGS_ChainLoadout() {
    (*this).ID = nullptr;
    auto& gen1857 = (*this).PrimaryWeapon;
    gen1857.Empty();
    auto& gen1858 = (*this).SecondaryWeapon;
    gen1858.Empty();
    auto& gen1859 = (*this).Equipment;
    gen1859.Empty();
}

