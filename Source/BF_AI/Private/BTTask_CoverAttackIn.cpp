#include "BTTask_CoverAttackIn.h"

UBTTask_CoverAttackIn::UBTTask_CoverAttackIn() {
    this->NodeName = TEXT("Hide To Cover");
    this->CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    this->DurationMin = 0.50f;
    this->DurationMax = 1.00f;
}


