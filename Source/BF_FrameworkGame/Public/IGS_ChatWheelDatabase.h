#pragma once
#include "CoreMinimal.h"
#include "IGS_ChatWheelDataRow.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_ChatWheelDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_ChatWheelDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ChatWheelDatabase();

    UFUNCTION(BlueprintCallable)
    void SetLastIconText(FText InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLastIconText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(FGameplayTag inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_ChatWheelDataRow GetDataChatWheel(UObject* inWCO, FGameplayTag inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_ChatWheelDataRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_ChatWheelDataRow> GetDatabaseTableBP() const;
    
};

