#include "META_TaskStativeInfo.h"

FMETA_TaskStativeInfo::FMETA_TaskStativeInfo() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).CurrentValue = 0;
    (*this).NeedValue = 0;
    (*this).Status = EMETA_TaskStatus::None;
    (*this).bOptional = false;
}

