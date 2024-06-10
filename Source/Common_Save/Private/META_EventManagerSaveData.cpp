#include "META_EventManagerSaveData.h"

FMETA_EventManagerSaveData::FMETA_EventManagerSaveData() {
    auto& gen2217 = (*this).DefaultGraphValues;
    gen2217.Empty();
    (*this).EventTime = EMETA_EventTime::DayStart;
    (*this).bPoolFrozen = false;
    (*this).bShouldCallEndDay = false;
    (*this).bEndDayWasCalled = false;
}

