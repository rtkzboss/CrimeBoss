#include "META_EnemyTierLimitOnCampaignStart.h"

FMETA_EnemyTierLimitOnCampaignStart::FMETA_EnemyTierLimitOnCampaignStart() {
    (*this).MaxArmyTier = EMETA_ArmyTier::Normal;
    (*this).DayRange.Min = 1;
    (*this).DayRange.Max = 6;
}

