#include "IGS_AIPointManager.h"

UIGS_AIPointManager::UIGS_AIPointManager() {
}

void UIGS_AIPointManager::UnregisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint) {
}

void UIGS_AIPointManager::UnregisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint) {
}

void UIGS_AIPointManager::RegisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint) {
}

void UIGS_AIPointManager::RegisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint) {
}

TArray<UActorComponent*> UIGS_AIPointManager::GetThrowBagComponents() const {
    return TArray<UActorComponent*>();
}

TArray<AIGS_ProgressGadgetBase*> UIGS_AIPointManager::GetDisruptibleGadgets() const {
    return TArray<AIGS_ProgressGadgetBase*>();
}

TArray<AIGS_WaypointFramework*> UIGS_AIPointManager::GetBotLimboJumpPoints() const {
    return TArray<AIGS_WaypointFramework*>();
}

TArray<AIGS_WaypointFramework*> UIGS_AIPointManager::GetBotLimboIdlePoints() const {
    return TArray<AIGS_WaypointFramework*>();
}


