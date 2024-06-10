#include "IGS_KeyItemInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_KeyItemInventoryObject::UIGS_KeyItemInventoryObject() {
    (*this).UniqueId = -1;
    (*this).ItemType = EIGS_ItemType::Item_Key;
    (*this).bUseCustomName = true;
}


