#include "META_MissionObjectiveConfig.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_ObjectiveRevivesCalculation.h"
#include "EMETA_ObjectiveType.h"

FMETA_MissionObjectiveConfig::FMETA_MissionObjectiveConfig() {
    (*this).Config.ShorDescription = FText::FromString(TEXT(""));
    (*this).Config.Description = FText::FromString(TEXT(""));
    (*this).Config.ObjectiveType = EMETA_ObjectiveType::None;
    (*this).Config.Amount = -1;
    (*this).Config.RevivesAmount = 0;
    (*this).Config.RevivesCalculation = EMETA_ObjectiveRevivesCalculation::AccumulateForAll;
    (*this).Config.RetrieveLootInPercents = 0;
    (*this).Config.MaximumAmountOfStrikes = 0;
    (*this).Config.ZiptieXCivilians = 0;
    (*this).Config.DontReachXPoliceStars = 0;
    (*this).Config.MaxAmountOfUsedHeisters = 0;
    (*this).Config.HeistersShouldSurvive = false;
    (*this).Config.UniqueHeisterID = EIGS_CharacterID::Char_Unknown;
    (*this).Config.UniqueHeisterShouldSurvive = false;
    (*this).Config.Seconds = 0;
    (*this).Config.EnemiesAmount = 0;
    (*this).Config.GangstersAmount = 0;
    (*this).Config.PoliceKills = 0;
    (*this).Config.SWATKills = 0;
    (*this).Config.GeneralAmountOfKills = 0;
    (*this).Config.KillsAmountOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Config.OutputParamTag, 0)) = NAME_None;
    (*this).Config.OutputParamValue = 0;
    (*this).Config.OutputParamOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*this).Config.DaysToComplete = 1;
    (*this).Config.ShowInFPS = true;
    (*this).DescriptionOverride = FText::FromString(TEXT(""));
    (*this).bOverrideReward = false;
}

