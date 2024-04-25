#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_EquipmentTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentDatabase.generated.h"

class UIGS_EquipmentInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_EquipmentDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_EquipmentDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_EquipmentInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> GetEquipmentByQualities(UObject* inWCO, const TArray<EMETA_ItemQuality>& inQualities, const TArray<FGameplayTag>& inUnlockedEquipment, bool inIgnoreUnlock);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EquipmentTableRow GetDataEquipmentByTagID(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EquipmentTableRow GetDataEquipment(UObject* inWCO, const TSubclassOf<UIGS_EquipmentInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_EquipmentTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

