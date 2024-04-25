#include "IGS_GameStateBaseWithData.h"
#include "Net/UnrealNetwork.h"

AIGS_GameStateBaseWithData::AIGS_GameStateBaseWithData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsGameStateDataReady = false;
}

void AIGS_GameStateBaseWithData::SetSpecificLootTypes(FGameplayTagContainer inSpecificLootTypes) {
}

void AIGS_GameStateBaseWithData::SetSpecialLoot(FIGS_SpecialLoot inSpecialLoot) {
}

void AIGS_GameStateBaseWithData::SetRespect(EMETA_RespectLvl inRespect) {
}

void AIGS_GameStateBaseWithData::SetProgressionLevel(int32 inLevel) {
}

void AIGS_GameStateBaseWithData::SetMissionValues(int32 inNeededMoney, int32 inMaxMoney) {
}

void AIGS_GameStateBaseWithData::SetMissionTag(FGameplayTag inMissionTag) {
}

void AIGS_GameStateBaseWithData::SetMissionScenario(FGameplayTag inMissionScenario) {
}

void AIGS_GameStateBaseWithData::SetMissionName(FText inMissionName) {
}

void AIGS_GameStateBaseWithData::SetLightScenario(const EIGS_LightingScenarioType inLightScenario) {
}

void AIGS_GameStateBaseWithData::SetGameStateDataDEBUG(FIGS_GameStateData inData) {
}

void AIGS_GameStateBaseWithData::SetDownedCharactersSurvive(bool inShouldSurvive) {
}

void AIGS_GameStateBaseWithData::SetDebugTile(const FString& inDebugTile) {
}

void AIGS_GameStateBaseWithData::SetDebugPreset(const FString& inDebugPreset) {
}

void AIGS_GameStateBaseWithData::ProgressionLevelSet_Implementation() {
}

void AIGS_GameStateBaseWithData::OnRep_GameStateData() {
}


void AIGS_GameStateBaseWithData::MarkDataFinal() {
}

int32 AIGS_GameStateBaseWithData::GetWantedBadges() const {
    return 0;
}

EIGS_UserDifficulty AIGS_GameStateBaseWithData::GetUserDifficulty() const {
    return EIGS_UserDifficulty::UD_Unknown;
}

int32 AIGS_GameStateBaseWithData::GetTotalMissionValue() const {
    return 0;
}

int32 AIGS_GameStateBaseWithData::GetTotalLootBagsInWeight() const {
    return 0;
}

int32 AIGS_GameStateBaseWithData::GetTotalLootBagsCount() const {
    return 0;
}

EIGS_TileEnviroment AIGS_GameStateBaseWithData::GetTileEnvironment() const {
    return EIGS_TileEnviroment::Street;
}

EIGS_SWATVariationType AIGS_GameStateBaseWithData::GetSWATVariation() const {
    return EIGS_SWATVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateBaseWithData::GetSWATTier() const {
    return EIGS_AITiers::AT_Tier1;
}

EIGS_MissionStartupSource AIGS_GameStateBaseWithData::GetStartupSource() const {
    return EIGS_MissionStartupSource::INVALID;
}

EIGS_MusicMissionState AIGS_GameStateBaseWithData::GetStartMusic() const {
    return EIGS_MusicMissionState::None;
}

FGameplayTagContainer AIGS_GameStateBaseWithData::GetSpecificLootTypes() const {
    return FGameplayTagContainer{};
}

FIGS_SpecialLoot AIGS_GameStateBaseWithData::GetSpecialLoot() const {
    return FIGS_SpecialLoot{};
}

EIGS_GangsterVariationType AIGS_GameStateBaseWithData::GetSecondaryEnemyVariation() const {
    return EIGS_GangsterVariationType::US_None;
}

EIGS_ScenarioDifficulty AIGS_GameStateBaseWithData::GetScenarioDifficulty() const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

EMETA_RespectLvl AIGS_GameStateBaseWithData::GetRespect() const {
    return EMETA_RespectLvl::Low;
}

EIGS_QPModeSource AIGS_GameStateBaseWithData::GetQPModeSource() const {
    return EIGS_QPModeSource::INVALID;
}

int32 AIGS_GameStateBaseWithData::GetProgressionLevel() const {
    return 0;
}

EIGS_GangsterVariationType AIGS_GameStateBaseWithData::GetPrimaryEnemyVariation() const {
    return EIGS_GangsterVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateBaseWithData::GetPrimaryEnemyTier() const {
    return EIGS_AITiers::AT_Tier1;
}

int32 AIGS_GameStateBaseWithData::GetObjectiveValue() const {
    return 0;
}

bool AIGS_GameStateBaseWithData::GetNeedObjectiveCompletion() const {
    return false;
}

EIGS_MPLobbyType AIGS_GameStateBaseWithData::GetMPLobbyType() const {
    return EIGS_MPLobbyType::INVALID;
}

EIGS_HubScenarioType AIGS_GameStateBaseWithData::GetMissionType() const {
    return EIGS_HubScenarioType::Empty;
}

FGameplayTag AIGS_GameStateBaseWithData::GetMissionTag() const {
    return FGameplayTag{};
}

FString AIGS_GameStateBaseWithData::GetMissionSubtype() const {
    return TEXT("");
}

FGameplayTag AIGS_GameStateBaseWithData::GetMissionScenario() const {
    return FGameplayTag{};
}

FText AIGS_GameStateBaseWithData::GetMissionName() const {
    return FText::GetEmpty();
}

FMETA_FPSBonusesFromMeta AIGS_GameStateBaseWithData::GetMetaBonusesData() const {
    return FMETA_FPSBonusesFromMeta{};
}

EMETA_LobbyVisibilityType AIGS_GameStateBaseWithData::GetLobbyVisibility() const {
    return EMETA_LobbyVisibilityType::Unknown;
}

EIGS_LightingScenarioType AIGS_GameStateBaseWithData::GetLightingScenario() const {
    return EIGS_LightingScenarioType::Midday;
}

bool AIGS_GameStateBaseWithData::GetIsDebug() const {
    return false;
}

bool AIGS_GameStateBaseWithData::GetIsChainMission() const {
    return false;
}

int32 AIGS_GameStateBaseWithData::GetIntelLevel() const {
    return 0;
}

EIGS_HubBackdropTypes AIGS_GameStateBaseWithData::GetHubVariant() const {
    return EIGS_HubBackdropTypes::AllRandom;
}

EIGS_HubDistrict AIGS_GameStateBaseWithData::GetHubDistrict() const {
    return EIGS_HubDistrict::INVALID;
}

int32 AIGS_GameStateBaseWithData::GetHeistersDataNum() const {
    return 0;
}

TArray<FCommonHeisterData> AIGS_GameStateBaseWithData::GetHeistersData() const {
    return TArray<FCommonHeisterData>();
}

EMETA_Heat AIGS_GameStateBaseWithData::GetHeat() const {
    return EMETA_Heat::INVALID;
}

FIGS_GameStateData AIGS_GameStateBaseWithData::GetGameStateDataDEBUG() const {
    return FIGS_GameStateData{};
}

EIGS_FPSDifficulty AIGS_GameStateBaseWithData::GetFPSDifficulty() const {
    return EIGS_FPSDifficulty::FD_Unknown;
}

int32 AIGS_GameStateBaseWithData::GetExpectedPlayerCount() const {
    return 0;
}

bool AIGS_GameStateBaseWithData::GetDownedCharctersSurvive() const {
    return false;
}

FString AIGS_GameStateBaseWithData::GetDebugTile() const {
    return TEXT("");
}

FString AIGS_GameStateBaseWithData::GetDebugPreset() const {
    return TEXT("");
}

int32 AIGS_GameStateBaseWithData::GetCivilianAmountOverride() const {
    return 0;
}

FMETA_ObjectiveTableRow AIGS_GameStateBaseWithData::GetBonusObjectiveData() const {
    return FMETA_ObjectiveTableRow{};
}

EIGS_HeistersBackupVariationType AIGS_GameStateBaseWithData::GetAllyVariation() const {
    return EIGS_HeistersBackupVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateBaseWithData::GetAllyTier() const {
    return EIGS_AITiers::AT_Tier1;
}

void AIGS_GameStateBaseWithData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GameStateBaseWithData, GameStateData);
}


