#include "CommonHeisterData.h"

FCommonHeisterData::FCommonHeisterData() {
    this->CharacterID = EIGS_CharacterID::Char_Gen_Start;
    this->UniqGenericId = 0;
    this->GenericVariantID = 0;
    this->bIsMaxLeveled = false;
    this->HeisterNumber = 0;
    this->PlayerId = 0;
    this->ProgressionLevel = 0;
    this->Experience = 0;
    this->Injuries = 0;
    this->CharacterState = EMETA_CharacterState::None;
    this->IsBot = false;
    this->bUseCustomLoadout = false;
    this->bComesFromMeta = false;
    this->KilledByTeamSide = EIGS_TeamSideEnum::TS_Heisters;
    this->KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    this->PlayerRespect = EMETA_RespectLvl::Low;
    this->MutableVariationIndex = 0;
    this->MissionCutPercentWithModifiers = 0;
}

