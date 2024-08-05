#include "IGS_WieldableExchange.h"

FIGS_WieldableExchange::FIGS_WieldableExchange() {
    (*this).NewWieldableActorClass = nullptr;
    (*this).NewInventoryObject = nullptr;
    (*this).SlotType = EIGS_WieldableSlot::S_UNKNOWN;
    (*this).bIsExchangeRunning = false;
    (*this).bIsExchangePrepared = false;
    (*this).bShouldStartExchange = false;
    (*this).bShouldSkipAnimation = false;
}

