#include "META_GenericCharacterSave.h"

FMETA_GenericCharacterSave::FMETA_GenericCharacterSave() {
    this->ItemPrice = 0;
    this->ArrayIndex = 0;
    this->ID = EIGS_CharacterID::Char_Gen_Start;
    this->GenericUniqId = 0;
    this->GenericVariantID = 0;
    this->MutableVariationIndex = 0;
    this->Quality = EMETA_ItemQuality::None;
    this->Level = 0;
    this->CanLevelUp = false;
    this->UpkeepCost = 0;
    this->MissionCutPercent = 0;
    this->HireCost = 0;
    this->WeaponsCostCoefficient = 0.00f;
    this->CarryCapacity = 0;
    this->Injuries = 0;
    this->TimesHealed = 0;
    this->JobsCanBeCompletedPerDay = 0;
    this->State = EMETA_CharacterState::None;
    this->Mood = EMETA_CharacterMood::Unhappy;
    this->InjureChanceInPercentage = 0;
    this->MissionsWasPlayed = 0;
    this->bTemporary = false;
    this->BaseLevelUpMultiplier = 0.00f;
}

