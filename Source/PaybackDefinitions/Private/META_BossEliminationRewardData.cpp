#include "META_BossEliminationRewardData.h"

FMETA_BossEliminationRewardData::FMETA_BossEliminationRewardData() {
    this->RewardType = EMETA_BossEliminationReward::None;
    this->Value = 0.00f;
    this->WeaponQuality = EMETA_ItemQuality::None;
    this->Weapon = NULL;
    this->Heister = EIGS_CharacterID::Char_Gen_Start;
    this->HeisterQuality = EMETA_ItemQuality::None;
}

