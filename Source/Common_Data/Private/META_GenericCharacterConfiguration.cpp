#include "META_GenericCharacterConfiguration.h"

FMETA_GenericCharacterConfiguration::FMETA_GenericCharacterConfiguration() {
    (*this).LevelRange.Min = 1;
    (*this).LevelRange.Max = 4;
    (*this).AllowedWeaponQualities = 0;
    (*this).AllowedEquipmentQualities = 0;
    (*this).StartingPerkCount = 1;
    (*this).MaximumPerkCount = 3;
}

