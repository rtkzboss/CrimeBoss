#include "META_HeisterSaveData.h"

FMETA_HeisterSaveData::FMETA_HeisterSaveData() {
    this->ItemPrice = 0;
    this->ArrayIndex = 0;
    this->ID = EIGS_CharacterID::Char_Gen_Start;
    this->Quality = EMETA_ItemQuality::None;
    this->Level = 0;
    this->CanLevelUp = false;
    this->BaseHireCost = 0;
    this->UpkeepCost = 0;
    this->MissionCutPercent = 0;
    this->Injuries = 0;
    this->MaxLeveled = false;
    this->JobsCanBeCompletedPerDay = 0;
    this->State = EMETA_CharacterState::None;
    this->Mood = EMETA_CharacterMood::Unhappy;
    this->MissionsWasPlayed = 0;
    this->TimesHealed = 0;
    this->bTemporary = false;
    this->BaseLevelUpMultiplier = 0.00f;
    this->IsUnseenInShop = false;
}

