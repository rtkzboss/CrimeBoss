#include "META_RandEventReward.h"

FMETA_RandEventReward::FMETA_RandEventReward() {
    this->RewardType = EMETA_RandEventReward::None;
    this->NewHeisterID = EIGS_CharacterID::Char_Gen_Start;
    this->Quality = EMETA_ItemQuality::None;
    this->HeatChangeForAmountOfLvls = 0;
    this->InvestigationProgressValueChangeForPercents = 0.00f;
    this->TargetGang = EMETA_Gang::None;
    this->Duration = 0;
    this->AttitudeChangeForAmountOfLvls = 0;
}

