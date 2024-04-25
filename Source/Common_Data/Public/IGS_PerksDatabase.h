#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_PerksTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_PerksDatabase.generated.h"

class UIGS_GameplayEffect_PerkBase;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_PerksDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_PerksDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_PerksTableRow GetPerkDataByTagID(const UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_PerksTableRow GetPerkData(const UObject* inWCO, const TSubclassOf<UIGS_GameplayEffect_PerkBase>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_GameplayEffect_PerkBase>& inClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_PerksTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

