#include "CommonDetectiveData.h"

FCommonDetectiveData::FCommonDetectiveData() {
    (*this).DetectiveID = nullptr;
    (*this).bAlive = false;
    (*this).bWasSpawned = false;
}

