#include "IGS_BTTask_MoveToBestPosInCombatRange.h"

UIGS_BTTask_MoveToBestPosInCombatRange::UIGS_BTTask_MoveToBestPosInCombatRange() {
    this->NodeName = TEXT("Move to Best Pos in Combat Range");
    this->RecalculateTimeMin = 1.10f;
    this->RecalculateTimeMax = 1.30f;
    this->QueryTemplate = NULL;
}


