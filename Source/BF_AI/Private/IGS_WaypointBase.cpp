#include "IGS_WaypointBase.h"
#include "Components/SceneComponent.h"

AIGS_WaypointBase::AIGS_WaypointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->IsActive = true;
    this->StoppingDistance = 10.00f;
    this->ApproachDistance = 150.00f;
    this->ExactPosition = false;
    this->FiltersByTeamSide = false;
    this->ValidForEnemySide = EIGS_TeamSideEnum::TS_Unknown;
    this->ValidTeamSides = 0;
    this->Root = (USceneComponent*)RootComponent;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->bDifficultyLocked = false;
}

void AIGS_WaypointBase::Visit(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_WaypointBase::UpdateDebugSubsystemSettings() {
}

void AIGS_WaypointBase::OnMoveCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed) {
}

void AIGS_WaypointBase::Leave(AIGS_GameCharacterFramework* inCharacter, bool inIsAbort) {
}

bool AIGS_WaypointBase::IsValidForTeamSideMask(int32 inTeamsideMask) {
    return false;
}

bool AIGS_WaypointBase::IsValidForTeamSide(EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool AIGS_WaypointBase::IsLocked() const {
    return false;
}

float AIGS_WaypointBase::GetStoppingDistance() const {
    return 0.0f;
}

FVector AIGS_WaypointBase::GetLookAtPosition() const {
    return FVector{};
}

bool AIGS_WaypointBase::GetExactPosition() const {
    return false;
}

float AIGS_WaypointBase::GetApproachDistance() const {
    return 0.0f;
}

bool AIGS_WaypointBase::CanVisit(AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

void AIGS_WaypointBase::Arrive(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_WaypointBase::Approach(AIGS_GameCharacterFramework* inCharacter) {
}


