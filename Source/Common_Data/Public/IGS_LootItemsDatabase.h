#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_LootItemTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootItemsDatabase.generated.h"

class UIGS_LootItemInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_LootItemsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_LootItemsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_LootItemInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_LootItemTableRow GetDataLootItem(UObject* inWCO, const TSubclassOf<UIGS_LootItemInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_LootItemTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootItemTableRow> GetDatabaseTableBP();
    
};

