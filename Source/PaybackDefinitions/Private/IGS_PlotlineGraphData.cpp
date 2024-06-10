#include "IGS_PlotlineGraphData.h"
#include "EMETA_PlotlineGraphStartTime.h"

FIGS_PlotlineGraphData::FIGS_PlotlineGraphData() {
    (*this).StartTime.Time = EMETA_PlotlineGraphStartTime::Universal;
    (*this).StartTime.MinDay = 0;
    auto& gen1731 = (*this).PlotlineConditions;
    gen1731.Empty();
    (*this).OuterConditionOperator = EMETA_ConditionExprOperator::Or;
}

