#include "IGS_AmmoInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_AmmoInventoryObject::UIGS_AmmoInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_Ammo;
}

int32 UIGS_AmmoInventoryObject::TakeAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon) {
    return 0;
}

bool UIGS_AmmoInventoryObject::IsAmmoFull() const {
    return false;
}

bool UIGS_AmmoInventoryObject::IsAmmoEmptyForWeapon(UIGS_WeaponInventoryObject* inWeapon) {
    return false;
}

int32 UIGS_AmmoInventoryObject::GetPreciseAmmoValue(UIGS_WeaponInventoryObject* inWeapon) {
    return 0;
}

float UIGS_AmmoInventoryObject::GetAmmoPercent() const {
    return 0.0f;
}

int32 UIGS_AmmoInventoryObject::GetAmmoCountInterpolated(int32 inWeaponMaxAmmoCount) const {
    return 0;
}

void UIGS_AmmoInventoryObject::AddAmmoPercent(float inAmmoPercent) {
}

int32 UIGS_AmmoInventoryObject::AddAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon) {
    return 0;
}


