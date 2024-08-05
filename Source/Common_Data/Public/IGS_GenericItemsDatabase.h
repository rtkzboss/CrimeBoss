#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GenericItemsTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_GenericItemsDatabase.generated.h"

class UIGS_GenericItemsInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_GenericItemsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GenericItemsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_GenericItemsInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_GenericItemsTableRow GetDataGenericItem(UObject* inWCO, const TSubclassOf<UIGS_GenericItemsInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_GenericItemsTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

