#include "META_CharacterData.h"

FMETA_CharacterData::FMETA_CharacterData() {
    this->GenericVariantID = 0;
    this->Quality = EMETA_ItemQuality::None;
    this->Level = 0;
    this->CanLevelUp = false;
    this->BaseUpkeepCost = 0;
    this->BaseMissionCutPercent = 0;
    this->MaxLeveled = false;
    this->BaseHireCost = 0;
    this->WeaponsCostCoefficient = 0.00f;
    this->JobsCanBeCompletedPerDay = 0;
    this->Injuries = 0;
    this->State = EMETA_CharacterState::None;
    this->Mood = EMETA_CharacterMood::Unhappy;
    this->Class = NULL;
    this->MissionsWasPlayed = 0;
    this->MutableVariationIndex = 0;
    this->TimesHealed = 0;
    this->bTemporary = false;
    this->bLocked = false;
    this->BaseLevelUpMultiplier = 0.00f;
}

