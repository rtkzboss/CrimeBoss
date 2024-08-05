#include "IGS_LootItemInventoryObject.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"

UIGS_LootItemInventoryObject::UIGS_LootItemInventoryObject() {
    (*this).ItemType = EIGS_ItemType::Item_Loot;
}


