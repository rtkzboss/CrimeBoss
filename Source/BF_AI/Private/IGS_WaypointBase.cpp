#include "IGS_WaypointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_WaypointBase::AIGS_WaypointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).StoppingDistance = 1.000000000e+01f;
    (*this).ApproachDistance = 1.500000000e+02f;
    (*this).ValidForEnemySide_DEPRECATED = EIGS_TeamSideEnum::TS_Unknown;
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = (USceneComponent*)Root;
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


