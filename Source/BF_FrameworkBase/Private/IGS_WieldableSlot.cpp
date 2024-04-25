#include "IGS_WieldableSlot.h"

FIGS_WieldableSlot::FIGS_WieldableSlot() {
    this->WieldableActorClass = NULL;
    this->SlotType = EIGS_WieldableSlot::S_MIN;
    this->IsLoading = false;
    this->IsPendingRemoval = false;
}

