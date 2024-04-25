#include "IGS_WieldableExchange.h"

FIGS_WieldableExchange::FIGS_WieldableExchange() {
    this->NewWieldableActorClass = NULL;
    this->SlotType = EIGS_WieldableSlot::S_MIN;
    this->bIsExchangeRunning = false;
    this->bIsExchangePrepared = false;
    this->bShouldStartExchange = false;
    this->bShouldSkipAnimation = false;
}

