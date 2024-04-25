#include "META_BaseFPSMission.h"
#include "Templates/SubclassOf.h"

UMETA_BaseFPSMission::UMETA_BaseFPSMission() {
    this->m_StealthCompletionFlag = false;
}

void UMETA_BaseFPSMission::SetWantedBadges(int32 inWantedBadges) {
}

void UMETA_BaseFPSMission::SetSwatTier(EIGS_AITiers inTier) {
}

void UMETA_BaseFPSMission::SetStealthCompletionFlag(bool inStealthCompletionFlag) {
}

void UMETA_BaseFPSMission::SetRespectValueOnMissionSpawn(EMETA_RespectLvl inNewRespect) {
}

void UMETA_BaseFPSMission::SetRequiredSoldiersForFullRevealIntel(int32 inNewValue) {
}

void UMETA_BaseFPSMission::SetPrimarySwatVariation(EIGS_SWATVariationType inVariation) {
}

void UMETA_BaseFPSMission::SetPrimaryEnemyVariation(EIGS_GangsterVariationType inVariation) {
}

void UMETA_BaseFPSMission::SetObjectiveState(EMETA_ObjectiveState inNewState) {
}

void UMETA_BaseFPSMission::SetMissionOutCome(int32 inExpenses) {
}

void UMETA_BaseFPSMission::SetMissionObjectiveMonetaryValue(int32 InValue) {
}

void UMETA_BaseFPSMission::SetMissionMonetaryRewards(int32 in1stStarReward, int32 in2ndStarReward, int32 in3rdStarReward, int32 inLootMonetaryValue) {
}

void UMETA_BaseFPSMission::SetMissionMaxMonetaryValue(int32 InValue) {
}

void UMETA_BaseFPSMission::SetMissionHeisterCut(int32 inHeisterCut) {
}

void UMETA_BaseFPSMission::SetMissionExpenses(int32 inMissionExpenses) {
}

void UMETA_BaseFPSMission::SetMissionBonusCash(int32 inMissionBonusCash) {
}

void UMETA_BaseFPSMission::SetGangsterTier(EIGS_AITiers inTier) {
}

void UMETA_BaseFPSMission::SetForceSelectedLoot(FGameplayTag inSelectedLoot) {
}

void UMETA_BaseFPSMission::SetFencingExpenses(int32 inExpenses) {
}

void UMETA_BaseFPSMission::SetDifficulty(EIGS_ScenarioDifficulty inNewDifficulty) {
}

void UMETA_BaseFPSMission::SetBonusLoot(TMap<FGameplayTag, int32> inBonusLoot) {
}

int32 UMETA_BaseFPSMission::GetWantedBadges() {
    return 0;
}

EIGS_AITiers UMETA_BaseFPSMission::GetSWATTier() const {
    return EIGS_AITiers::AT_Tier1;
}

EMETA_StealthMode UMETA_BaseFPSMission::GetStealthMode() {
    return EMETA_StealthMode::NotAvailable;
}

bool UMETA_BaseFPSMission::GetStealthCompletionFlag() {
    return false;
}

FGameplayTag UMETA_BaseFPSMission::GetSelectedLoot() {
    return FGameplayTag{};
}

EMETA_ReturnedDataProcessingMode UMETA_BaseFPSMission::GetReturnedDataProcessingMode() {
    return EMETA_ReturnedDataProcessingMode::AcceptLoot;
}

EMETA_RespectLvl UMETA_BaseFPSMission::GetRespectValueOnMissionSpawn() {
    return EMETA_RespectLvl::Low;
}

int32 UMETA_BaseFPSMission::GetRequiredSoldiersForFullRevealIntel() {
    return 0;
}

EIGS_SWATVariationType UMETA_BaseFPSMission::GetPrimarySwatVariation() const {
    return EIGS_SWATVariationType::US_None;
}

EIGS_GangsterVariationType UMETA_BaseFPSMission::GetPrimaryEnemyVariation() const {
    return EIGS_GangsterVariationType::US_None;
}

EMETA_ObjectiveState UMETA_BaseFPSMission::GetObjectiveState() {
    return EMETA_ObjectiveState::InProgress;
}

FMETA_ObjectiveRewardData UMETA_BaseFPSMission::GetObjectiveReward() {
    return FMETA_ObjectiveRewardData{};
}

FMETA_ObjectiveTableRow UMETA_BaseFPSMission::GetObjectiveDataBP() {
    return FMETA_ObjectiveTableRow{};
}

EMETA_FPSMissionSubtype UMETA_BaseFPSMission::GetMissionSubtype() const {
    return EMETA_FPSMissionSubtype::MoneyMaking;
}

int32 UMETA_BaseFPSMission::GetMissionOutCome() const {
    return 0;
}

int32 UMETA_BaseFPSMission::GetMissionObjectiveMonetaryValue() const {
    return 0;
}

void UMETA_BaseFPSMission::GetMissionMonetaryRewards(int32& out1stStarReward, int32& out2ndStarReward, int32& out3rdStarReward, int32& outLootMonetaryValue) {
}

int32 UMETA_BaseFPSMission::GetMissionMaxMonetaryValue() const {
    return 0;
}

int32 UMETA_BaseFPSMission::GetMissionHeisterCut() const {
    return 0;
}

int32 UMETA_BaseFPSMission::GetMissionExpenses() const {
    return 0;
}

int32 UMETA_BaseFPSMission::GetMissionBonusCash() const {
    return 0;
}

int32 UMETA_BaseFPSMission::GetLootPercentageFromSuccess() const {
    return 0;
}

EIGS_AITiers UMETA_BaseFPSMission::GetGangsterTier() const {
    return EIGS_AITiers::AT_Tier1;
}

FMETA_FPSMissionInfo UMETA_BaseFPSMission::GetFPSMissionInfo() {
    return FMETA_FPSMissionInfo{};
}

TSubclassOf<UIGS_BaseMissionObject> UMETA_BaseFPSMission::GetFPSMissionID() {
    return NULL;
}

int32 UMETA_BaseFPSMission::GetFencingExpenses() const {
    return 0;
}

EIGS_ScenarioDifficulty UMETA_BaseFPSMission::GetDifficulty() const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

TMap<FGameplayTag, int32> UMETA_BaseFPSMission::GetBonusLoot() const {
    return TMap<FGameplayTag, int32>();
}

EIGS_HeistersBackupVariationType UMETA_BaseFPSMission::GetAllyVariation() const {
    return EIGS_HeistersBackupVariationType::US_None;
}

void UMETA_BaseFPSMission::ClearObjective() {
}

void UMETA_BaseFPSMission::ChangeMaxMonetaryValueByIntel() {
}

void UMETA_BaseFPSMission::ChangeAmountOfSoldiersWereSentByValue(int32 ByValue) {
}


