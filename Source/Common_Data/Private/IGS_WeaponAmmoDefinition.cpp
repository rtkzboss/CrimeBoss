#include "IGS_WeaponAmmoDefinition.h"

FIGS_WeaponAmmoDefinition::FIGS_WeaponAmmoDefinition() {
    (*this).AmmoObject = nullptr;
    (*this).MagazineCapacity = 30;
    (*this).ReserveCapacity = 300;
    (*this).AmmoCostPerShot = 1;
}

