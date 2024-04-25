#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoHelpers.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AmmoInventoryObject;
class UIGS_InventoryObjectFramework;
class UIGS_WeaponInventoryObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_AmmoHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AmmoHelpers();

    UFUNCTION(BlueprintCallable)
    static void OverrideAmmoForSlot(AIGS_GameCharacterFramework* inOwner, EIGS_WieldableSlot inSlot, int32 inMagazineCount, int32 inReserveCount);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReserveEmptyForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void GiveAmmoForWeaponIfNotEnough(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon, float inThreshold);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAmmoReserveForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AmmoInventoryObject* GetAmmoObjectForWeapon(AIGS_GameCharacterFramework* inOwner, UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AmmoInventoryObject* GetAmmoObject(AIGS_GameCharacterFramework* inOwner, TSubclassOf<UIGS_InventoryObjectFramework> inAmmoClass);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UIGS_InventoryObjectFramework> GetAmmoClassForWeapon(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void AddFullAmmoToWeaponDontTakeReserve(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void AddFullAmmoToWeapon(UIGS_WeaponInventoryObject* inWeapon, AIGS_GameCharacterFramework* inOwner);
    
    UFUNCTION(BlueprintCallable)
    static void AddAmmoToWeapon(UIGS_WeaponInventoryObject* inWeapon, AIGS_GameCharacterFramework* inOwner, int32 inAmount);
    
    UFUNCTION(BlueprintCallable)
    static void AddAmmo(AIGS_GameCharacterFramework* inOwner, TSubclassOf<UIGS_AmmoInventoryObject> inAmmoClass, float inAmmoPercent);
    
};

