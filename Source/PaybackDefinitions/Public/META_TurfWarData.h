#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_GangStrategy.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TurfMissionDifficulty.h"
#include "META_AILastTileStrengthConfig.h"
#include "META_ArmySizeConfigForAI.h"
#include "META_ConditionForArmyTierChanging.h"
#include "META_DefenceResultCalculatingConfigForAI.h"
#include "META_EffectOnAIBossStrength.h"
#include "META_FloatInterval.h"
#include "META_GangPriorityChangeInfo.h"
#include "META_GangSpawnWeakenMission.h"
#include "META_GangStrategyPropertiesConfig.h"
#include "META_Interval.h"
#include "META_PlayerEndAgonyConfig.h"
#include "META_TurfActionWeaknessStrengthData.h"
#include "META_UIArmySizeConfig.h"
#include "META_WeakenMissionTurfActionGenData.h"
#include "META_TurfWarData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_TurfWarData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ArmyTier MaxArmyTierForInnerUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTilesAroundDetectiveBeAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_ArmySizeConfigForAI> ArmySizeLimitsPerPlayerRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_AILastTileStrengthConfig> AILastTileStrengthConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttemptsToCaptureTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerLoseAllSentSoldiersAfterFailedDefence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSoldiersAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountdownForAttackAfterLostTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ArmyTier InitialArmyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> PlayersArmyLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> RelationOfTurfsToRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> PlayerTileGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SoldiersCasualtiesInPercentsAfterNeutralAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> MinimalAmountOfSoldiersToAttackTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> MinimalAmountOfSoldiersToDefendTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PlayerEndAgonyConfig PlayerEndAgonyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberOfEnemySoldiersMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmyTierMultiplier_IfEnemyTierHigherThanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval ArmyTierDifferenceClamp_IfEnemyTierHigherThanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmyTierMultiplier_IfEnemyTierLowerThanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval ArmyTierDifferenceClamp_IfEnemyTierLowerThanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowManyDaysGangRememberLostTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowManyDaysGangExistsInEnemiesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowManyDaysGangCanAttackMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowManyAttacksCanDoGangsForDaysWithHighNumberAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMETA_GangStrategy> StrategiesThatCanAttackMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ConditionForArmyTierChanging> ConditionsForArmyTierChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_DefenceResultCalculatingConfigForAI DefenceResultCalculationConfigForAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMETA_Gang> GangsWhichCanAttackAnyTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GangCooldownForChangeArmyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GangPriorityChangeInfo GangPriorityChangeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GangSpawnWeakenMission> GangSpawnWeakenMissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_WeakenMissionTurfActionGenData> WeakenMissionTurfActionGenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_TurfActionWeaknessStrengthData> TurfActionWeaknessStrengthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> NormalGangStrategyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> DefensiveGangStrategyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> ConquerorGangStrategyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> RetaliatorGangStrategyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> RageGangStrategyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TurfMissionDifficulty, int32> TurfMissionDifficultyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTileStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTileStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval StartingTileBaseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileCurrentStrengthChangeWhenPlayerLosesAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileCurrentStrengthChangeWhenPlayerWinsDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthChangeIfTileIsolated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfFriendlyNeighbourTilesToConsiderTileAsConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthChangeIfTileConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthChangeIfTileWillCreateIsolatedTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastTileStrengthChangePerWeakenMissionCompletedOnLastTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTileWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTileWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakWhenAIBossHasOnly2Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakWhenAIBossHasOnly3Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakWhenAIBossHasDifferentAmountOfTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_AIBossStrengthChangeIntensity, FMETA_EffectOnAIBossStrength> StrengthChangeIntensityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_AIBossStrengthChangeIntensity, int32> WeaknessChangeIntensityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval StrengthTweaksIntervalForAIBossAfterTerritoryChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakForAIBossAfterTileLosingToAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakForAIBossAfterTileLosingToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakForAIBossAfterTileCapturingFromAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrengthTweakForAIBossAfterTileCapturingFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToAttackNeutralTurf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToAttackInRetaliatorTactic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseChanceToAttackAnyAdjacentTerritoryByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceIncreaseToAttackAnyAdjacentTerritoryByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToAttackTerritoryBelongingToTheGangFromEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UIArmySizeConfig UIArmySizeConfigValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UIArmySizeConfig UIArmySizeConfigValuesDefense;
    
public:
    UMETA_TurfWarData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RandomizeSoldiersCasualtiesInPercentsAfterNeutralAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaknessChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_WeakenMissionTurfActionGenData GetWeakenMissionTurfActionGenData(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_UIArmySizeConfig GetUIArmySizeConfigDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_UIArmySizeConfig GetUIArmySizeConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TurfMissionDifficulty GetTurfMissionDifficulty(int32 inAiArmySize) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfActionWeaknessStrengthData GetTurfActionWeaknessStrengthData(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetTileWeaknessInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetTileStrengthInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetTileStartingBaseStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTileCurrentStrengthChangeWhenPlayerWinsDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTileCurrentStrengthChangeWhenPlayerLosesAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasOnly3Tiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasOnly2Tiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasDifferentAmountOfTiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetStrengthTweaksIntervalForAIBossAfterTerritoryChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileLosingToPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileLosingToAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileCapturingFromPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileCapturingFromAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_EffectOnAIBossStrength GetStrengthChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthChangeIfWillCreateIsolatedTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthChangeIfTileIsolated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrengthChangeIfTileConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTagContainer> GetPlayersInitialTileGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersInitialSoldiersAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ArmyTier GetPlayersInitialArmyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersArmyLimit(EMETA_RespectLvl inPlayerRespect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PlayerEndAgonyConfig GetPlayerEndAgonyConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumberOfEnemySoldiersMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinAmountOfSoldiersForAttackAndDefence(EMETA_RespectLvl inRespectLvl, int32& outMinForAttack, int32& outMinForDefence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ArmyTier GetMaxArmyTierForInnerUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastTileStrengthChangePerWeakenMissionCompletedOnLastTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_GangStrategyPropertiesConfig GetGangStrategyProperties(EMETA_Gang inGang, EMETA_GangStrategy inStrategy) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangSpawnWeakenMission GetGangSpawnWeakenMissionInfo(int32 inGangPriority);
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangPriorityChangeInfo GetGangPriorityChangeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGangCooldownForChangeArmyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDurationOfLostTerritoryRemembering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDurationInsideEnemiesList() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DefenceResultCalculatingConfigForAI GetDefenceResultCalculationConfigForAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysAmountForMoreAttacksk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDataSetup_IfEnemyTierLowerThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDataSetup_IfEnemyTierHigherThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountdownForAttackAfterLostTile() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_ConditionForArmyTierChanging> GetConditionsForArmyTierChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToAttackNeutralTerritoryByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToAttackInRetaliatorTactic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToAttackAdjacentTerritoryToTheGangFromEnemiesList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceIncreaseToAttackAnyAdjacentTerritoryByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseChanceToAttackAnyAdjacentTerritoryByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttemptsToCaptureTerritory() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EMETA_Gang> GetArrayOfGangsWhichCanAttackAnyTile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ArmySizeConfigForAI GetArmySizeLimitsByPlayerRespect(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfFriendlyNeighbourTilesToConsiderTileAsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfAttackskForMoreAttacksDays() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EMETA_GangStrategy> GetAIStrategiesThatAttackMore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAIArmySizeForPlayersAttackOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPossibilityToAttackTilesAroundDetective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerLoseAllSentSoldiersAfterFailedDefence() const;
    
};

