#include "IGS_WeaponPanelDataStruct.h"

FIGS_WeaponPanelDataStruct::FIGS_WeaponPanelDataStruct() {
    (*this).SkinName = FText::FromString(TEXT(""));
    auto& gen1787 = (*this).Modes;
    gen1787.Empty();
    auto& gen1788 = (*this).Stats;
    gen1788.Empty();
}

