#include "BTTask_DutyReaction.h"

UBTTask_DutyReaction::UBTTask_DutyReaction() {
    auto& gen403 = (*this).OffenceDataKey.AllowedTypes;
    gen403.Empty();
    gen403.AddDefaulted(1);
    (*this).NodeName = TEXT("Duty Reaction");
}


