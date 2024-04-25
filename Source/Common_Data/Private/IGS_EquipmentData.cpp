#include "IGS_EquipmentData.h"

FIGS_EquipmentData::FIGS_EquipmentData() {
    this->bAllowedForGeneration = false;
    this->PriceModifier = 0.00f;
    this->ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    this->Charges = 0;
    this->bRefreshChargesOvertime = false;
    this->SecondsUntilChargeRefresh = 0;
    this->Cooldown = 0.00f;
}

