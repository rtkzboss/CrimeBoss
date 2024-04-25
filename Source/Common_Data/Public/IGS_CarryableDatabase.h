#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_CarryableTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableDatabase.generated.h"

class UIGS_CarryableInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_CarryableDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CarryableDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_CarryableInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CarryableTableRow GetDataCarryable(const UObject* inWCO, const TSubclassOf<UIGS_CarryableInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CarryableTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

