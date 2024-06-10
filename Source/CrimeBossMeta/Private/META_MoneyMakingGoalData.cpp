#include "META_MoneyMakingGoalData.h"

FMETA_MoneyMakingGoalData::FMETA_MoneyMakingGoalData() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Result = EMETA_GoalStatus::None;
    auto& gen3440 = (*this).Missions;
    gen3440.Empty();
    auto& gen3441 = (*this).AssignedTasks;
    gen3441.Empty();
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).MonetaryValue = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    auto& gen3442 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen3442.Empty();
    auto& gen3443 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen3443.Empty();
    (*this).EnemyGangIDs = 0;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

