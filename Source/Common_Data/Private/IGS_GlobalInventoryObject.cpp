#include "IGS_GlobalInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_GlobalInventoryObject::UIGS_GlobalInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_Global;
}

int32 UIGS_GlobalInventoryObject::GetMaxCount() {
    return 0;
}


