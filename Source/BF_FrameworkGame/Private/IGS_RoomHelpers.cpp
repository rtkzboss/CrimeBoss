#include "IGS_RoomHelpers.h"

UIGS_RoomHelpers::UIGS_RoomHelpers() {
}

void UIGS_RoomHelpers::UpdateCharacterCurrentRoom(AIGS_GameCharacterFramework* inCharacter) {
}

FVector UIGS_RoomHelpers::ShowRoomWithIndex(TArray<FIGS_RoomTestStruct> GroupOfRooms, int32 Index) {
    return FVector{};
}

void UIGS_RoomHelpers::SetCurrentSecurityLocationToCharacter(AIGS_GameCharacterFramework* inCharacter, AIGS_RoomBase* inCurrRoom) {
}

bool UIGS_RoomHelpers::InSameArea(AIGS_RoomBase* room1, AIGS_RoomBase* room2, int32 Depth) {
    return false;
}

void UIGS_RoomHelpers::HighlightBadPolys(const UObject* inWorldContextObject, TArray<FIGS_RoomTestStruct>& inGroupsWithoutRoom, TArray<FIGS_RoomTestStruct>& inGroupsWithMultipleRooms) {
}

TArray<AActor*> UIGS_RoomHelpers::GetTransitionPointsFromRoom(AIGS_RoomBase* Room) {
    return TArray<AActor*>();
}

TArray<AActor*> UIGS_RoomHelpers::GetTransitionPointsBetweenRooms(AIGS_RoomBase* inLeftRoom, AIGS_RoomBase* inRightRoom) {
    return TArray<AActor*>();
}

TArray<EIGS_RoomType> UIGS_RoomHelpers::GetRoomTypesFromBitflagInt(int32 inBitFlag) {
    return TArray<EIGS_RoomType>();
}

int32 UIGS_RoomHelpers::GetRoomIndex(const UObject* inWorldContextObject, AIGS_RoomBase* inRoom) {
    return 0;
}

int32 UIGS_RoomHelpers::GetRoomCount(const UObject* inWorldContextObject) {
    return 0;
}

AIGS_RoomBase* UIGS_RoomHelpers::GetRoomByLocation(const UObject* inWorldContextObject, FVector inInLocation, FVector inExtent) {
    return NULL;
}

AIGS_RoomBase* UIGS_RoomHelpers::GetRoomByIndex(const UObject* inWorldContextObject, int32 inIndex) {
    return NULL;
}

FText UIGS_RoomHelpers::GetLockNameFromRoom(AIGS_RoomBase* inRoom) {
    return FText::GetEmpty();
}

bool UIGS_RoomHelpers::GetIsLocationFrontFacing(AActor* inActor, FVector inQueryLocation) {
    return false;
}

int32 UIGS_RoomHelpers::GetIntFromRoomTypes(TArray<EIGS_RoomType> inRoomTypes) {
    return 0;
}

AIGS_DoorsBreachPoints* UIGS_RoomHelpers::GetBreachingPoints(FVector inQueryLocation, AIGS_DoorBase* inDoor) {
    return NULL;
}

void UIGS_RoomHelpers::GetBadRoomsOffline(const UObject* inWorldContextObject, TArray<FIGS_RoomTestStruct>& inGroupsWithoutRoom, TArray<FIGS_RoomTestStruct>& inGroupsWithMultipleRooms) {
}

void UIGS_RoomHelpers::GetBadRooms(const UObject* inWorldContextObject, TArray<FIGS_RoomTestStruct>& nodesWithoutRoom, TArray<FIGS_RoomTestStruct>& nodesWithMultipleRooms) {
}

TArray<AIGS_RoomBase*> UIGS_RoomHelpers::FindRoom(const UObject* inWorldContextObject, EIGS_RoomSecurityType inSecurity, EIGS_RoomType inType, EIGS_SecurityTier inOuterTier) {
    return TArray<AIGS_RoomBase*>();
}

FVector UIGS_RoomHelpers::FindCenterPolygonOfRoom(const TArray<FVector>& Room) {
    return FVector{};
}

void UIGS_RoomHelpers::DebugHighlightRoomPolys(AIGS_RoomBase* inRoom) {
}


