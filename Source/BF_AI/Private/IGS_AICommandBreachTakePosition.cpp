#include "IGS_AICommandBreachTakePosition.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandBreachTakePosition::UIGS_AICommandBreachTakePosition() {
    this->Type = EIGS_AICommandType::AICT_BreachTakePosition;
    this->MontageVariant = EIGS_AIMontageBreachVariant::Breach_Unknown;
}


