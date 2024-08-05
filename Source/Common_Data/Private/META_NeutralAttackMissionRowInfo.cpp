#include "META_NeutralAttackMissionRowInfo.h"

FMETA_NeutralAttackMissionRowInfo::FMETA_NeutralAttackMissionRowInfo() {
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Picture = nullptr;
    (*this).MapIconOverride = nullptr;
}

