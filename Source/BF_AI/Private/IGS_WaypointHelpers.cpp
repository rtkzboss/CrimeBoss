#include "IGS_WaypointHelpers.h"

UIGS_WaypointHelpers::UIGS_WaypointHelpers() {
}

void UIGS_WaypointHelpers::GoToWaypoint(AIGS_GameCharacterFramework* inAICharacter, AIGS_WaypointBase* inWaypoint, bool allowedInLimbo, bool allowedInAlarm) {
}

AIGS_WaypointBase* UIGS_WaypointHelpers::GetRememberedWaypoint(AIGS_GameCharacterFramework* inAICharacter) {
    return NULL;
}

AIGS_WaypointBase* UIGS_WaypointHelpers::GetRandomVisitableWaypoint(AIGS_GameCharacterFramework* inCharacter, TArray<AIGS_WaypointBase*> inWaypoints) {
    return NULL;
}

TArray<AIGS_WaypointBase*> UIGS_WaypointHelpers::GetAllVisitableWaypoints(AIGS_GameCharacterFramework* inCharacter, TArray<AIGS_WaypointBase*> inWaypoints) {
    return TArray<AIGS_WaypointBase*>();
}

UIGS_AICommandWait* UIGS_WaypointHelpers::CommandWaitForTime(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, float InTime, bool allowedInLimbo, bool allowedInAlarm) {
    return NULL;
}

UIGS_AICommandUseObject* UIGS_WaypointHelpers::CommandUseObject(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, AActor* inUsableObject, bool allowedInLimbo, bool allowedInAlarm) {
    return NULL;
}

UIGS_AICommandPlayAnimation* UIGS_WaypointHelpers::CommandPlayAnimation(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, EIGS_AIMontageSOVariant InAnimation, float InTime, bool allowedInLimbo, bool allowedInAlarm) {
    return NULL;
}

UIGS_AICommandMoveToWaypoint* UIGS_WaypointHelpers::CommandMoveToWaypoint(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, AIGS_WaypointBase* inWaypoint, bool allowedInLimbo, bool allowedInAlarm) {
    return NULL;
}

UIGS_AICommandMoveTo* UIGS_WaypointHelpers::CommandMoveTo(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, FVector inPositon, FVector inLookAtPos, bool inUseLookAtPos, EIGS_Speed inMovementSpeed, float inStoppingDistance, bool allowedInLimbo, bool allowedInAlarm) {
    return NULL;
}


