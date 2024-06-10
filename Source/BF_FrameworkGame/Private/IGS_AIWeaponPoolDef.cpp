#include "IGS_AIWeaponPoolDef.h"

FIGS_AIWeaponPoolDef::FIGS_AIWeaponPoolDef() {
    auto& gen2413 = (*this).PrimaryWeapons;
    gen2413.Empty();
    auto& gen2414 = (*this).SecondaryWeapons;
    gen2414.Empty();
    auto& gen2415 = (*this).MeleeWeapons;
    gen2415.Empty();
}

