#include "IGS_SaveManager.h"

UIGS_SaveManager::UIGS_SaveManager() {
    this->CareerSlotName = TEXT("SaveName");
    this->CachedAccountSave = NULL;
    this->CachedQuickplaySave = NULL;
    this->CachedCareerSave = NULL;
    this->CachedCareerDebugSave = NULL;
    this->WeaponCheatSelectionDebugSave = NULL;
}

bool UIGS_SaveManager::ShouldUnlockVeteranRewards() const {
    return false;
}

void UIGS_SaveManager::SetPlotlinesDisableDebugData(const UObject* inWCO, bool bDisable) {
}

void UIGS_SaveManager::SetDebugMode(const UObject* inWCO, bool inDebugState) {
}

void UIGS_SaveManager::SetCareerDebugData(const UObject* inWCO, FMETA_SaveData_DebugCareer inData) {
}

void UIGS_SaveManager::SaveWeaponCheatSelection(const UObject* inWCO, const FIGS_WeaponCheatSelection_DebugData& inWeaponSelection) {
}

void UIGS_SaveManager::SaveQuickplay(const UObject* inWCO) {
}

void UIGS_SaveManager::SavePlayerWantedProgressionResetCompensation() {
}

void UIGS_SaveManager::SavePlayerVisitedCrimeTime() {
}

void UIGS_SaveManager::SavePlayerSeenProgressionReset() {
}

void UIGS_SaveManager::SavePlayerReadSaveWarning() {
}

void UIGS_SaveManager::SavePlayerReadEULA() {
}

void UIGS_SaveManager::SaveCareer(const UObject* inWCO) {
}

void UIGS_SaveManager::SaveAll(const UObject* inWCO, const FString& inCareerSlotName, bool inIsDebugSaveFile) {
}

void UIGS_SaveManager::SaveAccount(const UObject* inWCO) {
}

UIGS_DebugWeaponCheatSelection* UIGS_SaveManager::LoadWeaponCheatSelection(const UObject* inWCO) {
    return NULL;
}

UIGS_PaybackSaveGameQuickplay* UIGS_SaveManager::LoadQuickplay(const UObject* inWCO) {
    return NULL;
}

UIGS_PaybackSaveGameCareer* UIGS_SaveManager::LoadCareer(const UObject* inWCO) {
    return NULL;
}

UIGS_PaybackSaveGameAccount* UIGS_SaveManager::LoadAccount(const UObject* inWCO) {
    return NULL;
}

bool UIGS_SaveManager::IsCareerDebugDataFilled(const UObject* inWCO) {
    return false;
}

bool UIGS_SaveManager::HasQuickplaySaveValidData() {
    return false;
}

bool UIGS_SaveManager::HasNormalCareerSaveValidData() {
    return false;
}

bool UIGS_SaveManager::HasDebugCareerSaveValidData() {
    return false;
}

bool UIGS_SaveManager::HasCareerSaveValidData() {
    return false;
}

bool UIGS_SaveManager::GetDebugMode(const UObject* inWCO) {
    return false;
}

FString UIGS_SaveManager::GetCareerSlotName(const UObject* inWCO) {
    return TEXT("");
}

FMETA_SaveData_DebugCareer UIGS_SaveManager::GetCareerDebugData(const UObject* inWCO) {
    return FMETA_SaveData_DebugCareer{};
}

TArray<FIGS_CareerSlotInfo> UIGS_SaveManager::GetAllCareerSaveFiles() const {
    return TArray<FIGS_CareerSlotInfo>();
}

bool UIGS_SaveManager::DoesQuickplaySaveExist() {
    return false;
}

bool UIGS_SaveManager::DoesNormalCareerSaveExist() {
    return false;
}

bool UIGS_SaveManager::DoesDebugWeaponCheatSelectionSaveExist(const UObject* inWCO) {
    return false;
}

bool UIGS_SaveManager::DoesDebugCareerSaveExist() {
    return false;
}

bool UIGS_SaveManager::DoesCareerSaveExist() {
    return false;
}

bool UIGS_SaveManager::DidPlayerWantedProgressionResetCompensation() {
    return false;
}

bool UIGS_SaveManager::DidPlayerVisitCrimeTime() {
    return false;
}

bool UIGS_SaveManager::DidPlayerSeenProgressionReset() {
    return false;
}

bool UIGS_SaveManager::DidPlayerReadSaveWarning() {
    return false;
}

bool UIGS_SaveManager::DidPlayerReadEULA() {
    return false;
}

void UIGS_SaveManager::DeleteCareer(const UObject* inWCO) {
}

UIGS_PaybackSaveGameCareer* UIGS_SaveManager::CreateCareer(const UObject* inWCO) {
    return NULL;
}

bool UIGS_SaveManager::CheckPlayerWasPlayingGame(const UObject* inWCO) {
    return false;
}

void UIGS_SaveManager::AddPlotlineTagToDebugData(const UObject* inWCO, FGameplayTag inPlotlineTag, bool& bSuccess) {
}


