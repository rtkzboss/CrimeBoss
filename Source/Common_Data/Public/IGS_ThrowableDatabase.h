#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ThrowableTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableDatabase.generated.h"

class UIGS_ThrowableInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_ThrowableDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ThrowableDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_ThrowableTableRow GetDataThrowable(UObject* inWCO, const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_ThrowableTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

