#include "META_MissionDatabase.h"

FMETA_MissionDatabase::FMETA_MissionDatabase() {
    this->ID = NULL;
    this->MissionType = EMETA_JobType::TerritoryNeutralAttack;
    this->CanAmbushAppear = false;
    this->AmbushResultOverridesTotalMissionResult = false;
    this->AmbushGang = EMETA_AmbushGang::None;
    this->DebriefType = EMETA_DebriefType::Standard;
    this->PlacementPriority = EMETA_PlacementPriority::Default;
}

