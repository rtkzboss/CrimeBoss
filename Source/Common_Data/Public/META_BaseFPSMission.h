#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_ObjectiveState.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_ReturnedDataProcessingMode.h"
#include "EMETA_StealthMode.h"
#include "META_ObjectiveRewardData.h"
#include "META_ObjectiveTableRow.h"
#include "META_BaseMission.h"
#include "META_FPSMissionInfo.h"
#include "Templates/SubclassOf.h"
#include "META_BaseFPSMission.generated.h"

class UIGS_BaseMissionObject;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_BaseFPSMission : public UMETA_BaseMission {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_StealthCompletionFlag;
    
public:
    UMETA_BaseFPSMission();

    UFUNCTION(BlueprintCallable)
    void SetWantedBadges(int32 inWantedBadges);
    
    UFUNCTION(BlueprintCallable)
    void SetSwatTier(EIGS_AITiers inTier);
    
    UFUNCTION(BlueprintCallable)
    void SetStealthCompletionFlag(bool inStealthCompletionFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetRespectValueOnMissionSpawn(EMETA_RespectLvl inNewRespect);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredSoldiersForFullRevealIntel(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimarySwatVariation(EIGS_SWATVariationType inVariation);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryEnemyVariation(EIGS_GangsterVariationType inVariation);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveState(EMETA_ObjectiveState inNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionRewardMultiplierFromIntel(const float inMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionOutCome(int32 inExpenses);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionObjectiveMonetaryValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionMonetaryValueMultiplier(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionMonetaryRewards(int32 in1stStarReward, int32 in2ndStarReward, int32 in3rdStarReward, int32 inLootMonetaryValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionMaxMonetaryValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionHeisterCut(int32 inHeisterCut);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionExpenses(int32 inMissionExpenses);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionBonusCash(int32 inMissionBonusCash);
    
    UFUNCTION(BlueprintCallable)
    void SetGangsterTier(EIGS_AITiers inTier);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSelectedLoot(FGameplayTag inSelectedLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetFencingExpenses(int32 inExpenses);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(EIGS_ScenarioDifficulty inNewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetBonusLoot(TMap<FGameplayTag, int32> inBonusLoot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWantedBadges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetSWATTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_StealthMode GetStealthMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStealthCompletionFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSelectedLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ReturnedDataProcessingMode GetReturnedDataProcessingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetRespectValueOnMissionSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredSoldiersForFullRevealIntel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_SWATVariationType GetPrimarySwatVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_GangsterVariationType GetPrimaryEnemyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ObjectiveState GetObjectiveState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ObjectiveRewardData GetObjectiveReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ObjectiveTableRow GetObjectiveDataBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_FPSMissionSubtype GetMissionSubtype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionRewardMultiplierFromIntel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionOutCome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionObjectiveMonetaryValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionMonetaryValueMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMissionMonetaryRewards(int32& out1stStarReward, int32& out2ndStarReward, int32& out3rdStarReward, int32& outLootMonetaryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionMaxMonetaryValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionHeisterCut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionExpenses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionBonusCash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLootPercentageFromSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetGangsterTier() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_FPSMissionInfo GetFPSMissionInfo();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UIGS_BaseMissionObject> GetFPSMissionID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFencingExpenses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ScenarioDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetBonusLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HeistersBackupVariationType GetAllyVariation() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearObjective();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAmountOfSoldiersWereSentByValue(int32 ByValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateCombinedMissionRewardMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyIntelProgressToMission();
    
};

