#include "IGS_CarryableInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_CarryableInventoryObject::UIGS_CarryableInventoryObject() {
    (*this).BaseHealth = 3.000000000e+02f;
    (*this).ItemType = EIGS_ItemType::Item_Carryable;
}

float UIGS_CarryableInventoryObject::GetRelativeHealth() {
    return 0.0f;
}


