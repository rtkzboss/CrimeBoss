#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_HubScenarioType.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_Heat.h"
#include "EMETA_LobbyVisibilityType.h"
#include "EMETA_RespectLvl.h"
#include "META_ObjectiveTableRow.h"
#include "CommonHeisterData.h"
#include "EIGS_MPLobbyType.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_QPModeSource.h"
#include "IGS_GameStateData.h"
#include "IGS_GameStateDataReadyDelegateDelegate.h"
#include "IGS_SpecialLoot.h"
#include "META_FPSBonusesFromMeta.h"
#include "IGS_GameStateBaseWithData.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API AIGS_GameStateBaseWithData : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameStateDataReadyDelegate OnGameStateDataReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameStateDataReadyDelegate OnMissionNameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameStateDataReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameStateData, meta=(AllowPrivateAccess=true))
    FIGS_GameStateData GameStateData;
    
public:
    AIGS_GameStateBaseWithData(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSpecificLootTypes(FGameplayTagContainer inSpecificLootTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialLoot(FIGS_SpecialLoot inSpecialLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetRespect(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressionLevel(int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionValues(int32 inNeededMoney, int32 inMaxMoney);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionTag(FGameplayTag inMissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionScenario(FGameplayTag inMissionScenario);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionName(FText inMissionName);
    
    UFUNCTION(BlueprintCallable)
    void SetLightScenario(const EIGS_LightingScenarioType inLightScenario);
    
    UFUNCTION(BlueprintCallable)
    void SetGameStateDataDEBUG(FIGS_GameStateData inData);
    
    UFUNCTION(BlueprintCallable)
    void SetDownedCharactersSurvive(bool inShouldSurvive);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTile(const FString& inDebugTile);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugPreset(const FString& inDebugPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProgressionLevelSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameStateData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStateDataReadyEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkDataFinal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWantedBadges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_UserDifficulty GetUserDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMissionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalLootBagsInWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalLootBagsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TileEnviroment GetTileEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_SWATVariationType GetSWATVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetSWATTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MissionStartupSource GetStartupSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MusicMissionState GetStartMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSpecificLootTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_SpecialLoot GetSpecialLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_GangsterVariationType GetSecondaryEnemyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ScenarioDifficulty GetScenarioDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetRespect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_QPModeSource GetQPModeSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgressionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_GangsterVariationType GetPrimaryEnemyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetPrimaryEnemyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedObjectiveCompletion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MPLobbyType GetMPLobbyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubScenarioType GetMissionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMissionSubtype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSBonusesFromMeta GetMetaBonusesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_LobbyVisibilityType GetLobbyVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LightingScenarioType GetLightingScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChainMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubBackdropTypes GetHubVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubDistrict GetHubDistrict() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeistersDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCommonHeisterData> GetHeistersData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Heat GetHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_GameStateData GetGameStateDataDEBUG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_FPSDifficulty GetFPSDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExpectedPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDownedCharctersSurvive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCivilianAmountOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ObjectiveTableRow GetBonusObjectiveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HeistersBackupVariationType GetAllyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetAllyTier() const;
    
};

