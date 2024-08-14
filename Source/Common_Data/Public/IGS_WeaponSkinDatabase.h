#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponSkinStruct.h"
#include "IGS_WeaponSkinTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponSkinDatabase.generated.h"

class UDataTable;
class UIGS_InventoryObjectFramework;
class UIGS_WeaponSkinData;
class UIGS_WeaponSkinDatabase;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WeaponSkinDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WeaponSkinDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetWeaponSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponSkinStruct GetWeaponSkinStructFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponSkinStruct GetWeaponSkinStructData(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_WeaponSkinDatabase* GetWeaponSkinDatabaseInstance(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UIGS_WeaponSkinData> GetDefaultSkinMaterialSlotFromTag(UObject* inWCO, FGameplayTag inWeaponSkinTag);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UIGS_WeaponSkinData> GetDefaultSkinFromTag(UObject* inWCO, FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponSkinTableRow GetDataWeaponSkin(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded, bool inSearchMaterialSlots);
    
};

