#include "IGS_MeleeWeaponInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_MeleeWeaponInventoryObject::UIGS_MeleeWeaponInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_MeleeWeapon;
    this->WeaponDefinitionObject = NULL;
}


