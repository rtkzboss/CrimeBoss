#include "IGS_KeyItemInventoryObject.h"
#include "EIGS_ItemType.h"

UIGS_KeyItemInventoryObject::UIGS_KeyItemInventoryObject() {
    this->ItemType = EIGS_ItemType::Item_Key;
    this->bUseCustomName = true;
    this->KeyRoomType = EIGS_RoomType::Lobby;
    this->UniqueId = -1;
}


