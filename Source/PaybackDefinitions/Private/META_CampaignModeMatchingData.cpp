#include "META_CampaignModeMatchingData.h"

FMETA_CampaignModeMatchingData::FMETA_CampaignModeMatchingData() {
    auto& gen1712 = (*this).Conditions;
    gen1712.Empty();
    (*this).ExpressionOperator = EMETA_ConditionExprOperator::And;
}

