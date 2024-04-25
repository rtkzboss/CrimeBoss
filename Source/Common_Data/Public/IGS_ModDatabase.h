#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ModTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModDatabase.generated.h"

class UIGS_ModInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_ModDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ModDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_ModTableRow GetModData(UObject* inWCO, const TSubclassOf<UIGS_ModInventoryObject>& inClass, bool& outSucceeded);
    
};

