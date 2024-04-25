#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_KeyItemTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_KeyItemsDatabase.generated.h"

class UIGS_KeyItemInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_KeyItemsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_KeyItemsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_KeyItemInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_KeyItemTableRow GetDataKeyItem(UObject* inWCO, const TSubclassOf<UIGS_KeyItemInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_KeyItemTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

