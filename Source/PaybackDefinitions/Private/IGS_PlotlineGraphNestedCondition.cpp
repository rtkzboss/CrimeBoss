#include "IGS_PlotlineGraphNestedCondition.h"

FIGS_PlotlineGraphNestedCondition::FIGS_PlotlineGraphNestedCondition() {
    auto& gen1732 = (*this).Conditions;
    gen1732.Empty();
    (*this).InnerConditionOperator = EMETA_ConditionExprOperator::And;
}

