#include "Common_PlayerStateSave.h"

FCommon_PlayerStateSave::FCommon_PlayerStateSave() {
    (*this).MoneyAmount = 0;
    auto& gen1768 = (*this).Items;
    gen1768.Empty();
}

