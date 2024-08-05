#include "IGS_DoorBreachAdapter.h"

UIGS_DoorBreachAdapter::UIGS_DoorBreachAdapter() {
}

FExitPoints UIGS_DoorBreachAdapter::GetExitPoints(AActor* Actor, AIGS_RoomBase* priorRoom) {
    return FExitPoints{};
}

FEntryPoints UIGS_DoorBreachAdapter::GetEnterPoints(AActor* Actor, AIGS_RoomBase* priorRoom) {
    return FEntryPoints{};
}


