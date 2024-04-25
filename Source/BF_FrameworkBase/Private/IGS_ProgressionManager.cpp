#include "IGS_ProgressionManager.h"

UIGS_ProgressionManager::UIGS_ProgressionManager() {
    this->CurrentLevel = 0;
    this->CurrentPoints = 0.00f;
    this->ProgressToNextLevel = 0.00f;
    this->PreviousPoints = 0.00f;
    this->PreviousLevel = 0;
    this->PendingLevelUps = 0;
    this->ProgressionManagerData = NULL;
    this->m_ProgressionCurveTable = NULL;
}

FIGS_ProgressionResult UIGS_ProgressionManager::SetPoints(float inPoints, bool inSaveProgression, bool inNotify) {
    return FIGS_ProgressionResult{};
}

FIGS_ProgressionResult UIGS_ProgressionManager::SetLevel(int32 inLevel, bool inSaveProgression, bool inNotify) {
    return FIGS_ProgressionResult{};
}

void UIGS_ProgressionManager::SetDebugMultiplier(const float inMultiplier) {
}

void UIGS_ProgressionManager::ResetProgression() {
}

void UIGS_ProgressionManager::ReInitProgressionManager() {
}

FIGS_ProgressionResult UIGS_ProgressionManager::ProcessMissionResult(FIGS_MissionResult& inMissionResult) {
    return FIGS_ProgressionResult{};
}

bool UIGS_ProgressionManager::HasMaxLevel() const {
    return false;
}

float UIGS_ProgressionManager::GetProgressToNextLevelFromPoints(float inPoints, int32 inNextLevel) const {
    return 0.0f;
}

float UIGS_ProgressionManager::GetProgressToNextLevel() const {
    return 0.0f;
}

float UIGS_ProgressionManager::GetPointsForLevel(int32 inLevel) const {
    return 0.0f;
}

float UIGS_ProgressionManager::GetMaxPointsForLevel(int32 inLevel) const {
    return 0.0f;
}

float UIGS_ProgressionManager::GetDebugMultiplier() const {
    return 0.0f;
}


