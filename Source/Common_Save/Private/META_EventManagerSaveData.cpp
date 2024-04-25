#include "META_EventManagerSaveData.h"

FMETA_EventManagerSaveData::FMETA_EventManagerSaveData() {
    this->EventTime = EMETA_EventTime::DayStart;
    this->bPoolFrozen = false;
    this->bShouldCallEndDay = false;
    this->bEndDayWasCalled = false;
}

