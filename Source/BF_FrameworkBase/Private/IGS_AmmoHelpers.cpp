#include "IGS_AmmoHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_AmmoHelpers::UIGS_AmmoHelpers() {
}

void UIGS_AmmoHelpers::OverrideAmmoForSlot(AIGS_GameCharacterFramework* inOwner, EIGS_WieldableSlot inSlot, int32 inMagazineCount, int32 inReserveCount) {
}

bool UIGS_AmmoHelpers::IsReserveEmptyForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon) {
    return false;
}

void UIGS_AmmoHelpers::GiveAmmoForWeaponIfNotEnough(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon, float inThreshold) {
}

int32 UIGS_AmmoHelpers::GetAmmoReserveForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon) {
    return 0;
}

UIGS_AmmoInventoryObject* UIGS_AmmoHelpers::GetAmmoObjectForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon) {
    return NULL;
}

UIGS_AmmoInventoryObject* UIGS_AmmoHelpers::GetAmmoObject(AIGS_GameCharacterFramework* inOwner, TSubclassOf<UIGS_InventoryObjectFramework> inAmmoClass) {
    return NULL;
}

TSubclassOf<UIGS_InventoryObjectFramework> UIGS_AmmoHelpers::GetAmmoClassForWeapon(UIGS_WeaponInventoryObject* inWeapon) {
    return NULL;
}

void UIGS_AmmoHelpers::AddFullAmmoToWeaponDontTakeReserve(UIGS_WeaponInventoryObject* inWeapon) {
}

void UIGS_AmmoHelpers::AddFullAmmoToWeapon(UIGS_WeaponInventoryObject* inWeapon, AIGS_GameCharacterFramework* inOwner) {
}

void UIGS_AmmoHelpers::AddAmmoToWeapon(UIGS_WeaponInventoryObject* inWeapon, AIGS_GameCharacterFramework* inOwner, int32 inAmount) {
}

void UIGS_AmmoHelpers::AddAmmo(AIGS_GameCharacterFramework* inOwner, TSubclassOf<UIGS_AmmoInventoryObject> inAmmoClass, float inAmmoPercent) {
}


