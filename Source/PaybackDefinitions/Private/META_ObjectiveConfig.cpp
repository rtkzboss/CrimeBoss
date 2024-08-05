#include "META_ObjectiveConfig.h"

FMETA_ObjectiveConfig::FMETA_ObjectiveConfig() {
    (*this).ShorDescription = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).ObjectiveType = EMETA_ObjectiveType::None;
    (*this).Amount = -1;
    (*this).RevivesAmount = 0;
    (*this).RevivesCalculation = EMETA_ObjectiveRevivesCalculation::AccumulateForAll;
    (*this).RetrieveLootInPercents = 0;
    (*this).MaximumAmountOfStrikes = 0;
    (*this).ZiptieXCivilians = 0;
    (*this).DontReachXPoliceStars = 0;
    (*this).MaxAmountOfUsedHeisters = 0;
    (*this).HeistersShouldSurvive = false;
    (*this).UniqueHeisterID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqueHeisterShouldSurvive = false;
    (*this).Seconds = 0;
    (*this).EnemiesAmount = 0;
    (*this).GangstersAmount = 0;
    (*this).PoliceKills = 0;
    (*this).SWATKills = 0;
    (*this).GeneralAmountOfKills = 0;
    (*this).KillsAmountOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).OutputParamTag, 0)) = NAME_None;
    (*this).OutputParamValue = 0;
    (*this).OutputParamOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*this).DaysToComplete = 1;
    (*this).ShowInFPS = true;
}

