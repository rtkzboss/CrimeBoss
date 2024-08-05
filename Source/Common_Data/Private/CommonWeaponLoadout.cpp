#include "CommonWeaponLoadout.h"

FCommonWeaponLoadout::FCommonWeaponLoadout() {
    (*this).METAWeaponClass = nullptr;
    (*this).WeaponClass = nullptr;
    (*this).WeaponMods.Empty();
}

