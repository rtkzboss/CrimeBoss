#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDatabase.generated.h"

class UDataTable;
class UIGS_PerWeaponClassSettingsDataAsset;
class UIGS_WeaponDatabase;
class UIGS_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WeaponDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PerWeaponClassSettingsDataAsset* PerClassWeaponSettings;
    
public:
    UIGS_WeaponDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponTableRow GetWeaponDataByTag(UObject* inWCO, FGameplayTag inTag, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_WeaponDatabase* GetWeaponDatabaseInstance(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponTableRow GetWeaponData(UObject* inWCO, const TSubclassOf<UIGS_WeaponInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_WeaponTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

