#include "META_GoalTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"

FMETA_GoalTableRow::FMETA_GoalTableRow() {
    (*this).ID = nullptr;
    (*this).GoalType = EMETA_GoalType::INVALID;
    (*this).GoalPurpose = EMETA_GoalPurpose::INVALID;
    (*this).Priority = EMETA_GoalPriority::Medium;
    (*this).StoryGoal.Title = FText::FromString(TEXT(""));
    (*this).StoryGoal.Description = FText::FromString(TEXT(""));
    (*this).StoryGoal.bIsGoalRepeatable = false;
    (*this).StoryGoal.DaysBetweenAttempts = 1;
    auto& gen3432 = (*this).StoryGoal.Missions;
    gen3432.Empty();
    auto& gen3433 = (*this).StoryGoal.ActionCardsGoal;
    gen3433.Empty();
    (*this).StoryGoal.RespectByDefault = 0;
    (*this).StoryGoal.UseLockRespectCondition = false;
    (*this).StoryGoal.UnlockRespect = EMETA_RespectLvl::Low;
    (*this).StoryGoal.LockRespect = EMETA_RespectLvl::Low;
    (*this).StoryGoal.InstigatorPartner = EMETA_Partner::Secretary;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).StoryGoal.EntitlementTag, 0)) = NAME_None;
    (*this).MoneyMakingGoal.Title = FText::FromString(TEXT(""));
    (*this).MoneyMakingGoal.Description = FText::FromString(TEXT(""));
    (*this).MoneyMakingGoal.UseLockRespectCondition = false;
    (*this).MoneyMakingGoal.UnlockRespect = EMETA_RespectLvl::Low;
    (*this).MoneyMakingGoal.LockRespect = EMETA_RespectLvl::Low;
    (*this).MoneyMakingGoal.InstigatorPartner = EMETA_Partner::Secretary;
    (*this).MoneyMakingGoal.TaskTitle = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MoneyMakingGoal.LootType, 0)) = NAME_None;
    (*this).MoneyMakingGoal.MonetaryValue.Min = 0;
    (*this).MoneyMakingGoal.MonetaryValue.Max = 0;
    auto& gen3434 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingGoal.MissionTypeTags, 0));
    gen3434.Empty();
    auto& gen3435 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingGoal.MissionTypeTags, 0));
    gen3435.Empty();
    (*this).MoneyMakingGoal.EnemyGangIDs = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MoneyMakingGoal.EntitlementTag, 0)) = NAME_None;
}

