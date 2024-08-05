#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "META_DetectiveTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_DetectiveDatabase.generated.h"

class UMETA_DetectiveID;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_DetectiveDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_DetectiveDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UMETA_DetectiveID>> GetDetectivesIDs(UObject* inWCO) const;
    
    UFUNCTION(BlueprintCallable)
    static FMETA_DetectiveTableRow GetDetectiveData(UObject* inWCO, TSubclassOf<UMETA_DetectiveID> inID, bool& outSucceeded);
    
};

