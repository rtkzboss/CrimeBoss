#include "IGS_GenericItemsInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_GenericItemsInventoryObject::UIGS_GenericItemsInventoryObject() {
    (*this).LootWeight = EIGS_ItemWeight::Light;
    (*this).UniversalID = -1;
    (*this).ItemType = EIGS_ItemType::Item_GenericItems;
}

int32 UIGS_GenericItemsInventoryObject::GetItemWeightValue(EIGS_ItemWeight inWeight) {
    return 0;
}


