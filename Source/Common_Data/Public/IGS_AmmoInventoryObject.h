#pragma once
#include "CoreMinimal.h"
#include "IGS_AmmoInventoryObjectAmmoChangedSignatureDelegate.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_AmmoInventoryObject.generated.h"

class UIGS_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_AmmoInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AmmoInventoryObjectAmmoChangedSignature OnAmmoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AmmoInventoryObjectAmmoChangedSignature OnAmmoDepleted;
    
    UIGS_AmmoInventoryObject();

    UFUNCTION(BlueprintCallable)
    int32 TakeAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmmoFull() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAmmoEmptyForWeapon(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPreciseAmmoValue(UIGS_WeaponInventoryObject* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCountInterpolated(int32 inWeaponMaxAmmoCount) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAmmoPercent(float inAmmoPercent);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAmmoForWeapon(int32 inCount, UIGS_WeaponInventoryObject* inWeapon);
    
};

