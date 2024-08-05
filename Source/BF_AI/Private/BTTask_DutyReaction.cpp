#include "BTTask_DutyReaction.h"

UBTTask_DutyReaction::UBTTask_DutyReaction() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Duty Reaction");
}


