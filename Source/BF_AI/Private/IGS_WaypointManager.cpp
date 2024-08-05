#include "IGS_WaypointManager.h"
#include "Templates/SubclassOf.h"

UIGS_WaypointManager::UIGS_WaypointManager() {
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypointsOfClassInBoxWithTransform(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, const FTransform& inBoxWorldTransform, FVector InBoxExtent) const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypointsOfClassInBox(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, FVector inOrigin, FVector InBoxExtent) const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypointsOfClass(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass) const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypointsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypointsInBox(FVector inOrigin, FVector InBoxExtent) const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_WaypointBase*> UIGS_WaypointManager::GetAllWaypoints() const {
    return TArray<AIGS_WaypointBase*>();
}

TArray<AIGS_SmartObjectSimpleBase*> UIGS_WaypointManager::GetAllSimpleSmartObjectsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const {
    return TArray<AIGS_SmartObjectSimpleBase*>();
}


