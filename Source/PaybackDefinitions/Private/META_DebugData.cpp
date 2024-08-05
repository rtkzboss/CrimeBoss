#include "META_DebugData.h"

UMETA_DebugData::UMETA_DebugData() {
}

FMETA_Interval UMETA_DebugData::GetHeistersAlwaysSurvive() const {
    return FMETA_Interval{};
}

int32 UMETA_DebugData::GetChanceBeMiaAfterSuccess() const {
    return 0;
}

int32 UMETA_DebugData::GetChanceBeMiaAfterFail() const {
    return 0;
}

int32 UMETA_DebugData::GetChanceBeKiaAfterSuccess() const {
    return 0;
}

int32 UMETA_DebugData::GetChanceBeKiaAfterFail() const {
    return 0;
}


