#include "META_BMEventEquipmentData.h"

FMETA_BMEventEquipmentData::FMETA_BMEventEquipmentData() {
    (*this).Cooldown = 0;
    (*this).MinAvailableCash = 0;
    (*this).NumberOfEquipmentPerEvent = 1;
    (*this).ExpirationTime = 0;
    (*this).EquipmentQualitiesChances.Empty();
}

