#include "IGS_WeaponPanelDataStruct.h"

FIGS_WeaponPanelDataStruct::FIGS_WeaponPanelDataStruct() {
    (*this).SkinName = FText::FromString(TEXT(""));
    (*this).Modes.Empty();
    (*this).Stats.Empty();
}

