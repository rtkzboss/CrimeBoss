#include "META_CampaignStatistic.h"

FMETA_CampaignStatistic::FMETA_CampaignStatistic() {
    this->DaysPlayed = 0;
    this->CampaignStatus = EMETA_CareerStatus::None;
    this->CareerCompletionReason = EMETA_CareerCompletionReason::NoTurfTiles;
    this->ScoreForCampaign = 0;
}

