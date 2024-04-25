#include "IGS_AISpawnPoint.h"

AIGS_AISpawnPoint::AIGS_AISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitSpecialization = EIGS_UnitSpecialization::US_None;
    this->IsActive = true;
    this->AutomaticStart = false;
    this->AutomaticStartDelay = 0.20f;
    this->IsRandomStart = false;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->SettingsOverride = NULL;
    this->TeamSideOverride = EIGS_TeamSideEnum::TS_Unknown;
    this->GoTo = NULL;
    this->GoToScope = 255;
    this->DefaultGoToScope = 0;
    this->bOverrideGoToScope = false;
    this->OverridenGoToScope = 0;
    this->Teleport = false;
    this->GoToSpeed = EIGS_Speed::MS_Walk;
    this->GoToCrouch = false;
    this->SpawnAnim = EIGS_SpawnAnimType::SA_None;
    this->SpawnAsDead = false;
    this->PostponeAILogicAfterStartedPlayingMatch = false;
    this->SquadID = -1;
    this->LastUsedTimestamp = 0.00f;
    this->CanBeSeen = true;
    this->SpawnTestPawn = false;
}

void AIGS_AISpawnPoint::SpawnUnitParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization) {
}

void AIGS_AISpawnPoint::SpawnUnit() {
}



