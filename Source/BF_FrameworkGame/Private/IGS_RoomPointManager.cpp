#include "IGS_RoomPointManager.h"
#include "Net/UnrealNetwork.h"

UIGS_RoomPointManager::UIGS_RoomPointManager() {
    this->bRoomPolysGathered = false;
}

UIGS_RoomPointManager* UIGS_RoomPointManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

void UIGS_RoomPointManager::InitializeRooms() {
}

TArray<AIGS_RoomBase*> UIGS_RoomPointManager::GetRoomsWithGameplayTag(FGameplayTag inTag) {
    return TArray<AIGS_RoomBase*>();
}

ARoomNavmesh* UIGS_RoomPointManager::GetRoomNavData() {
    return NULL;
}

AIGS_HumanNavMesh* UIGS_RoomPointManager::GetHumanNavData() {
    return NULL;
}

TArray<AIGS_RoomBase*> UIGS_RoomPointManager::GetAllRoomsInBox(FVector inOrigin, FVector InBoxExtent) const {
    return TArray<AIGS_RoomBase*>();
}

void UIGS_RoomPointManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_RoomPointManager, Rooms);
    DOREPLIFETIME(UIGS_RoomPointManager, RoomsData);
}


