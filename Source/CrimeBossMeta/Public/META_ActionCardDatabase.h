#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "META_ActionCardTableRow.h"
#include "META_ActionCardDatabase.generated.h"

class UMETA_BaseActionCard;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ActionCardDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_ActionCardDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSoftClassPtr<UMETA_BaseActionCard>& inClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ActionCardTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_ActionCardTableRow> GetDatabaseTableBP();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<UMETA_BaseActionCard>> GetDatabaseIDs();
    
    UFUNCTION(BlueprintCallable)
    static FMETA_ActionCardTableRow GetDataActionCard(UObject* inWCO, TSoftClassPtr<UMETA_BaseActionCard> inClass, bool& outSucceeded);
    
};

