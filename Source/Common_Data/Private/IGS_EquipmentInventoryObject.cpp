#include "IGS_EquipmentInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_EquipmentInventoryObject::UIGS_EquipmentInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_Equipment;
}

float UIGS_EquipmentInventoryObject::GetLastChargeTimestamp() const {
    return 0.0f;
}

int32 UIGS_EquipmentInventoryObject::GetHasInfiniteCharges() const {
    return 0;
}

int32 UIGS_EquipmentInventoryObject::GetChargeCount() const {
    return 0;
}


