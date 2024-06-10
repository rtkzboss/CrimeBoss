#include "IGS_WieldableSlot.h"

FIGS_WieldableSlot::FIGS_WieldableSlot() {
    (*this).WieldableActorClass = nullptr;
    (*this).InventoryObject = nullptr;
    (*this).SlotType = EIGS_WieldableSlot::S_UNKNOWN;
    (*this).IsLoading = false;
    (*this).IsPendingRemoval = false;
}

