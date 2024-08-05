#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundDataRefreshedDelegate.h"
#include "IGS_MenuBackgroundTableRow.h"
#include "IGS_MenuBackgroundDatabase.generated.h"

class UAkStateValue;
class UIGS_MenuBackgroundMusicStatesDataAsset;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuBackgroundDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MenuBackgroundDataRefreshed OnMenuBackgroundDataRefreshed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MenuBackgroundMusicStatesDataAsset* AkStatesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDebugEnabled;
    
public:
    UIGS_MenuBackgroundDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetSelectableMenuBackgroundsNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(FGameplayTag inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MenuBackgroundTableRow GetDataMenuBackground(UObject* inWCO, FGameplayTag inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MenuBackgroundTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_MenuBackgroundTableRow> GetDatabaseTableBP() const;
    
    UFUNCTION(BlueprintCallable)
    UAkStateValue* GetAkStateForTag(FGameplayTag inID);
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugMode();
    
};

