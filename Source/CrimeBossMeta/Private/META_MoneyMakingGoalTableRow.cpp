#include "META_MoneyMakingGoalTableRow.h"

FMETA_MoneyMakingGoalTableRow::FMETA_MoneyMakingGoalTableRow() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::Low;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).TaskTitle = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*this).MonetaryValue.Min = 0;
    (*this).MonetaryValue.Max = 0;
    auto& gen3436 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen3436.Empty();
    auto& gen3437 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen3437.Empty();
    (*this).EnemyGangIDs = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

