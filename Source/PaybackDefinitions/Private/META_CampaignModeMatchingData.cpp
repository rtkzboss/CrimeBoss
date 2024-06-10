#include "META_CampaignModeMatchingData.h"

FMETA_CampaignModeMatchingData::FMETA_CampaignModeMatchingData() {
    (*this).CampaignMode = nullptr;
    (*this).Conditions.Empty();
    (*this).ExpressionOperator = EMETA_ConditionExprOperator::And;
}

