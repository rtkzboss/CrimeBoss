#include "IGS_WeaponInventoryObject.h"
#include "EIGS_ItemType.h"
#include "Templates/SubclassOf.h"

UIGS_WeaponInventoryObject::UIGS_WeaponInventoryObject() {
    (*this).WeaponSkin = nullptr;
    (*this).DefaultWeaponSkin = nullptr;
    (*this).ShouldConsumeAmmo = true;
    (*this).ItemType = EIGS_ItemType::Item_Weapon;
}

int32 UIGS_WeaponInventoryObject::TakeAmmoFromMagazine(int32 inCount) {
    return 0;
}

bool UIGS_WeaponInventoryObject::HasFullMagazine() {
    return false;
}

bool UIGS_WeaponInventoryObject::HasEmptyMagazine() {
    return false;
}

int32 UIGS_WeaponInventoryObject::GetReserveAmmoCapacity() {
    return 0;
}

int32 UIGS_WeaponInventoryObject::GetMagazineCapacity() {
    return 0;
}

int32 UIGS_WeaponInventoryObject::GetAmmoInMagazine() const {
    return 0;
}

void UIGS_WeaponInventoryObject::DestroyMod(TSubclassOf<UIGS_ModInventoryObject> inMod) {
}

void UIGS_WeaponInventoryObject::ChangeSkin(UIGS_WeaponSkinData* inNewSkin, UIGS_WeaponSkinData* inNewDefaultSkin) {
}

void UIGS_WeaponInventoryObject::AddMod(TSubclassOf<UIGS_ModInventoryObject> inMod) {
}

int32 UIGS_WeaponInventoryObject::AddAmmoToMagazine(int32 inCount) {
    return 0;
}


