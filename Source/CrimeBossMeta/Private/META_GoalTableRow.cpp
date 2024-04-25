#include "META_GoalTableRow.h"

FMETA_GoalTableRow::FMETA_GoalTableRow() {
    this->ID = NULL;
    this->GoalType = EMETA_GoalType::INVALID;
    this->GoalPurpose = EMETA_GoalPurpose::INVALID;
    this->Priority = EMETA_GoalPriority::Low;
}

