#include "META_HeatGradeCondition.h"

FMETA_HeatGradeCondition::FMETA_HeatGradeCondition() {
    this->CivilianCasualties = 0;
    this->CivilianCasualtiesOperator = EMETA_ConditionOperator::Equal;
    this->PoliceCasualties = 0;
    this->PoliceCasualtiesOperator = EMETA_ConditionOperator::Equal;
}

