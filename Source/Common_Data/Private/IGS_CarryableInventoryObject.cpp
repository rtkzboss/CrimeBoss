#include "IGS_CarryableInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_CarryableInventoryObject::UIGS_CarryableInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_Carryable;
    this->CurrentHealth = 0.00f;
    this->BaseHealth = 300.00f;
}

float UIGS_CarryableInventoryObject::GetRelativeHealth() {
    return 0.0f;
}


