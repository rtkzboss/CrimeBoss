#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AccountSaveDataRequestedDelegateDelegate.h"
#include "IGS_CareerDeletedDelegateDelegate.h"
#include "IGS_CareerSaveDataRequestedDelegateDelegate.h"
#include "IGS_CareerSlotInfo.h"
#include "IGS_QuickplaySaveDataRequestedDelegateDelegate.h"
#include "IGS_WeaponCheatSelection_DebugData.h"
#include "META_SaveData_DebugCareer.h"
#include "IGS_SaveManager.generated.h"

class UIGS_DebugWeaponCheatSelection;
class UIGS_PaybackSaveGameAccount;
class UIGS_PaybackSaveGameCareer;
class UIGS_PaybackSaveGameQuickplay;
class UMETA_DebugCareerSaveGame;
class UObject;

UCLASS(Blueprintable, Config=Game)
class COMMON_SAVE_API UIGS_SaveManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AccountSaveDataRequestedDelegate OnAccountSaveDataRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_QuickplaySaveDataRequestedDelegate OnQuickplaySaveDataRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CareerSaveDataRequestedDelegate OnCareerSaveDataRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CareerDeletedDelegate OnCareerDeleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CareerSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* CachedAccountSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameQuickplay* CachedQuickplaySave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameCareer* CachedCareerSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMETA_DebugCareerSaveGame* CachedCareerDebugSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_DebugWeaponCheatSelection* WeaponCheatSelectionDebugSave;
    
public:
    UIGS_SaveManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUnlockVeteranRewards() const;
    
    UFUNCTION(BlueprintCallable)
    static void SetPlotlinesDisableDebugData(const UObject* inWCO, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMode(const UObject* inWCO, bool inDebugState);
    
    UFUNCTION(BlueprintCallable)
    static void SetCareerDebugData(const UObject* inWCO, FMETA_SaveData_DebugCareer inData);
    
    UFUNCTION(BlueprintCallable)
    static void SaveWeaponCheatSelection(const UObject* inWCO, const FIGS_WeaponCheatSelection_DebugData& inWeaponSelection);
    
    UFUNCTION(BlueprintCallable)
    static void SaveQuickplay(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerWantedProgressionResetCompensation();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerVisitedCrimeTime();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerSeenProgressionReset();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerReadSaveWarning();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerReadEULA();
    
    UFUNCTION(BlueprintCallable)
    static void SaveCareer(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAll(const UObject* inWCO, const FString& inCareerSlotName, bool inIsDebugSaveFile);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAccount(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_DebugWeaponCheatSelection* LoadWeaponCheatSelection(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PaybackSaveGameQuickplay* LoadQuickplay(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PaybackSaveGameCareer* LoadCareer(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PaybackSaveGameAccount* LoadAccount(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCareerDebugDataFilled(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuickplaySaveValidData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNormalCareerSaveValidData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDebugCareerSaveValidData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCareerSaveValidData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugMode(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCareerSlotName(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_SaveData_DebugCareer GetCareerDebugData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_CareerSlotInfo> GetAllCareerSaveFiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesQuickplaySaveExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNormalCareerSaveExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesDebugWeaponCheatSelectionSaveExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesDebugCareerSaveExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCareerSaveExist();
    
    UFUNCTION(BlueprintCallable)
    bool DidPlayerWantedProgressionResetCompensation();
    
    UFUNCTION(BlueprintCallable)
    bool DidPlayerVisitCrimeTime();
    
    UFUNCTION(BlueprintCallable)
    bool DidPlayerSeenProgressionReset();
    
    UFUNCTION(BlueprintCallable)
    bool DidPlayerReadSaveWarning();
    
    UFUNCTION(BlueprintCallable)
    bool DidPlayerReadEULA();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteCareer(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PaybackSaveGameCareer* CreateCareer(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPlayerWasPlayingGame(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlotlineTagToDebugData(const UObject* inWCO, FGameplayTag inPlotlineTag, bool& bSuccess);
    
};

