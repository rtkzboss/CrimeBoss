#include "CommonWeaponLoadout.h"

FCommonWeaponLoadout::FCommonWeaponLoadout() {
    (*this).WeaponClass = nullptr;
    auto& gen1854 = (*this).WeaponMods;
    gen1854.Empty();
}

