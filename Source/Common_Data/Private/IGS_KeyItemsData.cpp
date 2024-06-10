#include "IGS_KeyItemsData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_KeyItemsData::FIGS_KeyItemsData() {
    (*this).KeySecurity = EIGS_RoomSecurityType::Outside;
    (*this).ItemType = EIGS_ItemType::Item_Key;
}

