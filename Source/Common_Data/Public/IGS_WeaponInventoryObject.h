#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponInventoryObject.generated.h"

class UIGS_ModInventoryObject;
class UIGS_WeaponClassSettingsDataAsset;
class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_WeaponInventoryObject : public UIGS_WieldableInventoryObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinitionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> DefaultWeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldConsumeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExtraFireModeActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_WeaponClassSettingsDataAsset* m_WeaponClassData;
    
public:
    UIGS_WeaponInventoryObject();

    UFUNCTION(BlueprintCallable)
    int32 TakeAmmoFromMagazine(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool HasFullMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool HasEmptyMagazine();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReserveAmmoCapacity();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMagazineCapacity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoInMagazine() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyMod(TSubclassOf<UIGS_ModInventoryObject> inMod);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkin(UIGS_WeaponSkinData* inNewSkin, UIGS_WeaponSkinData* inNewDefaultSkin);
    
    UFUNCTION(BlueprintCallable)
    void AddMod(TSubclassOf<UIGS_ModInventoryObject> inMod);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAmmoToMagazine(int32 inCount);
    
};

