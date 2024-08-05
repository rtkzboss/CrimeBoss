#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_LootCollectionTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootCollectionDatabase.generated.h"

class UIGS_LootCollectionObject;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LootCollectionDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_LootCollectionDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_LootCollectionObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_LootCollectionTableRow GetDataLootItem(UObject* inWCO, const TSubclassOf<UIGS_LootCollectionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_LootCollectionTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootCollectionTableRow> GetDatabaseTableBP();
    
};

