#include "META_TaskInfo.h"

FMETA_TaskInfo::FMETA_TaskInfo() {
    this->ID = 0;
    this->CurrentValue = 0;
    this->NeedValue = 0;
    this->Status = EMETA_TaskStatus::None;
    this->bOptional = false;
}

