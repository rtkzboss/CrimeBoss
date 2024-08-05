#include "IGS_ScriptPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"

AIGS_ScriptPoint::AIGS_ScriptPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Enabled = true;
    (*this).DirectionLookAtPosDistance = 1.000000000e+03f;
    (*this).CanEverBeEnabled = true;
}

bool AIGS_ScriptPoint::TryActivateScriptPoint(AIGS_GameCharacterFramework* inActivator) {
    return false;
}

void AIGS_ScriptPoint::OnVisit_Implementation(AIGS_GameCharacterFramework* inActivator) {
}

void AIGS_ScriptPoint::OnLeave_Implementation(AIGS_GameCharacterFramework* inActivator, bool inIsAbort) {
}

void AIGS_ScriptPoint::OnArrive_Implementation(AIGS_GameCharacterFramework* inActivator) {
}

void AIGS_ScriptPoint::OnApproach_Implementation(AIGS_GameCharacterFramework* inActivator) {
}

bool AIGS_ScriptPoint::IsRedirectPointBlueprint_Implementation() {
    return false;
}

bool AIGS_ScriptPoint::IsLockedBlueprint_Implementation() const {
    return false;
}

bool AIGS_ScriptPoint::IsEnabled() const {
    return false;
}

AIGS_WaypointBase* AIGS_ScriptPoint::GetNextPoint() {
    return NULL;
}

TArray<AActor*> AIGS_ScriptPoint::GetExtraArrowActors_Implementation() {
    return TArray<AActor*>();
}

void AIGS_ScriptPoint::Finish(AIGS_GameCharacterFramework* inActivator) {
}

void AIGS_ScriptPoint::Execute_Implementation(AIGS_GameCharacterFramework* inActivator) {
}

bool AIGS_ScriptPoint::CanBeActivatedBy_Implementation(AIGS_GameCharacterFramework* inActivator) {
    return false;
}


