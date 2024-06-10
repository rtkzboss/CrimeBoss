#include "META_MoneyMakingGoalData.h"

FMETA_MoneyMakingGoalData::FMETA_MoneyMakingGoalData() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    (*this).Picture = nullptr;
    (*this).Result = EMETA_GoalStatus::None;
    (*this).Missions.Empty();
    (*this).AssignedTasks.Empty();
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).MonetaryValue = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)).Empty();
    (*this).EnemyGangIDs = 0;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

